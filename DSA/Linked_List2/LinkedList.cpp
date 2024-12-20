#include <iostream>
#include "Node.cpp"
using namespace std;

Node *reverseIterative(Node *head)
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

Node *reverseLL3(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }

  Node *smallAns = reverseLL3(head->next);
  Node *tail = head->next;
  tail->next = head;
  head->next = NULL;
  return smallAns;
}

class Pair
{
public:
  Node *head;
  Node *tail;
};

Pair reverseLL2(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    Pair ans;
    ans.head = head;
    ans.tail = head;
    return ans;
  }
  Pair smallAns = reverseLL2(head->next);
  smallAns.tail->next = head;
  head->next = NULL;
  Pair ans;
  ans.head = smallAns.head;
  ans.tail = head;
  return ans;
}

Node *reverseLL2Better(Node *head)
{
  return reverseLL2(head).head;
}

Node *recursiveLL(Node *head)
{
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *smallAns = recursiveLL(head->next);
  Node *temp = smallAns;
  while (temp->next != NULL)
  {
    temp = temp->next;
  }
  temp->next = head;
  head->next = NULL;
  return smallAns;
}

Node *mergeTwoSortedLinkedLists(Node *head1, Node *head2)
{
  // Write your code here
  if (head1 == NULL)
  {
    return head2;
  }
  if (head2 == NULL)
  {
    return head1;
  }
  Node *fhead = NULL;
  Node *ftail = NULL;
  if (head1->data <= head2->data)
  {
    fhead = head1;
    ftail = head1;
    head1 = head1->next;
  }
  else
  {
    fhead = head2;
    ftail = head2;
    head2 = head2->next;
  }
  while (head1 != NULL && head2 != NULL)
  {
    if (head1->data <= head2->data)
    {

      ftail->next = head1;
      ftail = head1;
      head1 = head1->next;
    }
    else if (head2->data < head1->data)
    {
      ftail->next = head2;
      ftail = head2;
      head2 = head2->next;
    }
  }
  if (head1 != NULL)
  {
    ftail->next = head1;
  }
  if (head2 != NULL)
  {
    ftail->next = head2;
  }
  return fhead;
}

bool detectCycle(Node *head)
{
  //	Write your code here
  if (head == NULL || head->next == NULL)
  {
    return false;
  }
  Node *slow = head;
  Node *fast = head->next;
  while (fast != NULL && fast->next != NULL)
  {
    slow = slow->next;
    fast = fast->next->next;
    if (slow == fast)
    {
      return true;
    }
  }
  return false;
}

Node *midPoint(Node *head)
{
  // Write your code here
  if (head == NULL)
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
  // cout << detectCycle(head) << endl;
  // head = reverseLL2Better(head);
  // head = reverseLL3(head);
  head = reverseIterative(head);
  print(head);
  // Node *mid = midPoint(head);
  // cout << mid->data << endl;

  // Node *head1 = takeInput();
  // Node *head2 = takeInput();
  // Node *head = mergeTwoSortedLinkedLists(head1, head2);
  // print(head);
}