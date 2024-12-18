#include <iostream>
#include "Node.cpp"
using namespace std;
int length(Node *head)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

Node *appendLastNToFirst(Node *head, int n)
{
  // Write your code here
  if (head == NULL)
  {
    return head;
  }
  int count = length(head);
  int index = 0;
  Node *temp = head;
  Node *x = NULL;
  while (temp->next != NULL)
  {
    if (index == (count - n - 1))
    {
      x = temp;
    }
    temp = temp->next;
    index++;
  }
  if (temp != NULL && x != NULL)
  {
    temp->next = head;
    head = x->next;
    x->next = NULL;
  }
  return head;
}

void printReverse(Node *head)
{
  // Write your code here
  if (head == NULL)
  {
    return;
  }
  printReverse(head->next);
  cout << head->data << " ";
}

int findNode(Node *head, int n)
{
  // Write your code here.
  Node *temp = head;
  int count = 0;
  bool find = false;
  while (temp != NULL)
  {
    if (temp->data == n)
    {
      find = true;
      break;
    }
    else
    {
      count++;
      temp = temp->next;
    }
  }
  if (find)
  {
    return count;
  }
  else
  {
    return -1;
  }
}

void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << endl;
}

Node *takeInput()
{
  int data;
  cin >> data;
  Node *head = NULL;
  Node *tail = NULL;
  while (data != -1)
  {
    Node *newNode = new Node(data);
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
    cin >> data;
  }
  return head;
}

int main()
{
  Node *head = takeInput();
  int n;
  cin >> n;
  head = appendLastNToFirst(head, n);
  print(head);
  // printReverse(head);
  // int data;
  // cin >> data;
  // cout << findNode(head, data) << endl;
  // print(head);
}