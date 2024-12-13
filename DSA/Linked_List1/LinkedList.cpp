#include <iostream>
#include "Node.cpp"
using namespace std;

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