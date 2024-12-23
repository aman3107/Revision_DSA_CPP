#include <iostream>
#include "Node.cpp"
using namespace std;

template <typename T>

class StackLL
{
  Node<T> *head;
  int capacity;

public:
  StackLL()
  {
    head = NULL;
    capacity = 0;
  }

  void push(T data)
  {
    Node<T> *newNode = new Node<T>(data);
    newNode->next = head;
    head = newNode;
    capacity++;
  }

  bool isEmpty()
  {
    return head == NULL;
  }

  T pop()
  {
    if (isEmpty())
    {
      cout << "Stack is empty";
      return 0;
    }
    T ans = head->data;
    Node<T> *a = head;
    head = head->next;
    delete a;
    capacity--;
    return ans;
  }

  T top()
  {
    if (isEmpty())
    {
      cout << "Stack is empty";
      return 0;
    }
    return head->data;
  }

  int size()
  {
    return capacity;
  }
};