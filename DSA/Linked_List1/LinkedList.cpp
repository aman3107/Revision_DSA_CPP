#include <iostream>
#include "Node.cpp"
using namespace std;

Node *deleteNodeRecursive(Node *head, int index)
{
  if (head == NULL)
  {
    return NULL;
  }
  if (index == 0)
  {
    Node *a = head->next;
    delete head;
    return a;
  }
  Node *smallOutput = deleteNodeRecursive(head->next, index - 1);
  head->next = smallOutput;
  return head;
}

Node *insertNodeRecursive(Node *head, int index, int data)
{
  if (head == NULL)
  {
    return head;
  }
  if (index == 0)
  {
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
    return head;
  }
  Node *x = insertNodeRecursive(head->next, index - 1, data);
  if (x == NULL && index == 1)
  {
    Node *newNode = new Node(data);
    head->next = newNode;
    return head;
  }
  head->next = x;
  return head;
}

int lengthRecursive(Node *head)
{
  Node *temp = head;
  if (temp == NULL)
  {
    return 0;
  }
  int smallerOutput = lengthRecursive(temp->next);
  return smallerOutput + 1;
}

Node *deleteNode(Node *head, int ind)
{
  if (head == NULL)
  {
    return head;
  }
  if (ind == 0)
  {
    Node *a = head;
    head = a->next;
    delete a;
    return head;
  }
  int count = 0;
  Node *temp = head;
  while (temp != NULL && count < ind - 1)
  {
    temp = temp->next;
    count++;
  }
  if (temp == NULL || temp->next == NULL)
  {
    return head;
  }
  else
  {
    Node *a = temp->next;
    temp->next = a->next;
    delete a;
  }
  return head;
}

Node *insertNode(Node *head, int ind, int data)
{
  Node *newNode = new Node(data);
  Node *temp = head;
  if (ind == 0)
  {
    newNode->next = head;
    head = newNode;
    return head;
  }
  int count = 0;
  while (temp != NULL && count < ind - 1)
  {
    temp = temp->next;
    count++;
  }
  if (temp != NULL)
  {
    newNode->next = temp->next;
    temp->next = newNode;
  }
  return head;
}

void printIthNode(Node *head, int i)
{
  int count = 0;
  Node *temp = head;
  while (temp != NULL)
  {
    if (count == i)
    {
      cout << temp->data;
    }
    else if (count > i)
    {
      break;
    }
    count++;
    temp = temp->next;
  }
}

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

void print(Node *head)
{
  Node *tail = head;
  while (tail != NULL)
  {
    cout << tail->data << " ";
    tail = tail->next;
  }
}

int main()
{
  Node *head = takeInput();
  // cout << lengthRecursive(head) << endl;
  // print(head);
  // cout << length(head) << endl;
  // printIthNode(head, 4);
  // cout << head->next->next->data;
  int index, data;
  cin >> index >> data;
  // head = insertNode(head, index, data);
  // head = deleteNode(head, index);
  // head = insertNodeRecursive(head, index, data);
  head = deleteNodeRecursive(head, index);
  print(head);

  // Statically
  /*
  Node n1(1);
  Node *head = &n1;
  Node n2(2);
  n1.next = &n2;
  Node n3(3);
  n2.next = &n3;
  Node n4(4);
  n3.next = &n4;
  Node n5(5);
  n4.next = &n5;*/

  // Dynamically
  /*
  Node *n1 = new Node(1);
  Node *head = n1;
  Node *n2 = new Node(2);
  Node *n3 = new Node(3);
  Node *n4 = new Node(4);
  Node *n5 = new Node(5);
  n1->next = n2;
  n2->next = n3;
  n3->next = n4;
  n4->next = n5;
  print(head);
 */

  // Node n1(1);
  // Node *head = &n1;
  // Node n2(2);
  // n1.next = &n2;
  // cout << n1.data << endl;
  // cout << n2.data << endl;
  // cout << head->data << " " << head->next->data << endl;

  // Node *n3 = new Node(20);
  // Node *headD = n3;
  // Node *n4 = new Node(30);
  // n3->next = n4;
  // cout << headD->data << " " << headD->next->data;
}