#include <iostream>
using namespace std;

class Node
{
public:
  int data;
  Node *prev, *next;

  Node(int data)
  {
    this->data = data;
    prev = NULL;
    next = NULL;
  }
};