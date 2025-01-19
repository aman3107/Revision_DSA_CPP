#include <iostream>
#include <string>
using namespace std;

template <typename V>
class MapNode
{
public:
  string key;
  V value;
  MapNode *next;

  MapNode(string key, V value)
  {
    this->key = key;
    this->value = value;
    this->next = NULL;
  }

  ~MapNode()
  {
    delete next;
  }
};

template <typename V>
class HashMap
{
  MapNode<V> **buckets;
  int size;
  int numBuckets;

public:
  HashMap()
  {
    size = 0;
    numBuckets = 5;
    buckets = new MapNode<V> *[numBuckets];
    for (int i = 0; i < numBuckets; i++)
    {
      buckets[i] = NULL;
    }
  }

  ~HashMap()
  {
    for (int i = 0; i < numBuckets; i++)
    {
      delete buckets[i];
    }
    delete[] buckets;
  }

  int getSize()
  {
    return size;
  }

private:
  int getBucketIndex(string key)
  {
    int hashCode = 0;
    int currentCoeff = 1;
    for (int i = key.length() - 1; i > 0; i--)
    {
      hashCode += key[i] * currentCoeff;
      hashCode = hashCode % numBuckets;
      currentCoeff *= 37;
      currentCoeff = currentCoeff % numBuckets;
    }
    return hashCode % numBuckets;
  }

  void rehash()
  {
    MapNode<V> **temp = buckets;
    buckets = new MapNode<V> *[2 * numBuckets];
    for (int i = 0; i < 2 * numBuckets; i++)
    {
      buckets[i] = NULL;
    }
    int oldBucketCount = numBuckets;
    numBuckets = 2 * numBuckets;
    size = 0;
    for (int i = 0; i < oldBucketCount; i++)
    {
      MapNode<V> *head = temp[i];
      while (head != NULL)
      {
        string key = head->key;
        V value = head->value;
        insert(key, value);
        head = head->next;
      }
    }
    for (int i = 0; i < oldBucketCount; i++)
    {
      delete temp[i];
    }
    delete[] temp;
  }

public:
  V getValue(string key)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *temp = buckets[bucketIndex];
    while (temp != NULL)
    {
      if (temp->key == key)
      {
        return temp->value;
      }
      temp = temp->next;
    }
    return 0;
  }
  double getLoadFactor()
  {
    return (1.0 * size) / numBuckets;
  }
  void insert(string key, V value)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *head = buckets[bucketIndex];
    while (head != NULL)
    {
      if (head->key == key)
      {
        head->key = value;
        return;
      }
      head = head->next;
    }
    head = buckets[bucketIndex];
    MapNode<V> *newNode = new MapNode<V>(key, value);
    newNode->next = head;
    buckets[bucketIndex] = newNode;
    size++;
    double loadFactor = (1.0 * size) / numBuckets;
    if (loadFactor > 0.7)
    {
      rehash();
    }
  }
  V remove(string key)
  {
    int bucketIndex = getBucketIndex(key);
    MapNode<V> *temp = buckets[bucketIndex];
    MapNode<V> *prev = NULL;
    V removeValue = 0;
    while (temp != NULL)
    {
      if (temp->key == key)
      {
        if (prev == NULL)
        {
          buckets[bucketIndex] = temp->next;
        }
        else
        {
          prev->next = temp->next;
        }
        removeValue = temp->value;
        temp->next = NULL;
        delete temp;
        size--;
        return removeValue;
      }
      prev = temp;
      temp = temp->next;
    }
    return removeValue;
  }
};