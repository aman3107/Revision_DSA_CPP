#include <iostream>
#include "Node2.cpp"
using namespace std;

Node *midPoint(Node *head)
{
  Node *slow = head;
  Node *fast = head->next;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

bool palindromeDLL(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return true;
  }
  Node *mid = midPoint(head);
  Node *tail = mid;
  while (tail->next != NULL)
  {
    tail = tail->next;
  }
  while (mid != tail)
  {
    if (head->data != tail->data)
    {
      return false;
    }
    else
    {
      head = head->next;
      tail = tail->prev;
    }
  }
  return true;
}

void print(Node *head)
{
  Node *temp = head;
  while (temp != NULL)
  {
    cout << temp->data << " ";
    temp = temp->next;
  }
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
      newNode->prev = tail;
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
  cout << palindromeDLL(head);
  // print(head);
}