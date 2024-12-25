#include <iostream>
#include "Node.cpp"
using namespace std;

template <typename T>
class Queue
{
  Node<T> *head;
  Node<T> *tail;
  int size;

public:
  Queue()
  {
    this->head = NULL;
    this->tail = NULL;
    size = 0;
  }
  int getSize()
  {
    return size;
  }

  bool isEmpty()
  {
    return size == 0;
  }
  void enqueue(T ele)
  {
    Node<T> *newNode = new Node<T>(ele);
    if (head == NULL)
    {
      head = newNode;
      tail = newNode;
    }
    else
    {
      tail->next = newNode;
      tail = newNode;
    }
    size++;
  }
  T dequeue()
  {
    if (isEmpty())
    {
      tail = NULL;
      return 0;
    }
    T ans = head->data;
    Node<T> *temp = head;
    head = head->next;
    size--;
    delete temp;
    return ans;
  }
  T front()
  {
    if (isEmpty())
    {
      return 0;
    }
    return head->data;
  }
};