#include <iostream>
#include "Node.cpp"
using namespace std;

Node *reverseLL(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *current = head;
  Node *prev = NULL;
  Node *next = head->next;
  while (current != NULL)
  {
    current->next = prev;
    prev = current;
    current = next;
    if (next != NULL)
    {
      next = next->next;
    }
  }
  return prev;
}

Node *midNode(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *slow = head;
  Node *fast = head->next;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
  }
  return slow;
}

bool isPalindrome(Node *head)
{
  // Write your code here
  if (head == NULL || head->next == NULL)
  {
    return true;
  }
  Node *midHead = midNode(head);
  Node *head1 = reverseLL(midHead->next);
  Node *head2 = head;
  while (head1 != NULL)
  {
    if (head1->data != head2->data)
    {
      return false;
    }
    else
    {
      head1 = head1->next;
      head2 = head2->next;
    }
  }
  return true;
}

Node *removeDuplicates(Node *head)
{
  // Write your code here
  if (head == NULL)
  {
    return head;
  }
  Node *temp1 = head;
  Node *temp2 = head->next;
  while (temp1->next != NULL)
  {
    if (temp1->data == temp2->data)
    {
      Node *x = temp2;
      temp1->next = x->next;
      temp2 = x->next;
      delete x;
    }
    else
    {
      temp1 = temp1->next;
      temp2 = temp2->next;
    }
  }
  return head;
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
  // head = rotate(head, n);
  print(head);
  // head = appendLastNToFirst(head, n);
  // head = removeDuplicates(head);
  // bool ans = isPalindrome(head);
  // cout << ans << endl;
  // print(head);
  // printReverse(head);
  // int data;
  // cin >> data;
  // cout << findNode(head, data) << endl;
  // print(head);
}