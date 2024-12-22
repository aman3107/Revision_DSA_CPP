#include <iostream>
#include "Node.cpp"
using namespace std;

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

Node *split(Node *head)
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

Node *mergeSort(Node *head)
{
  // Write your code here
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *mid = split(head);
  Node *firstHead = head;
  Node *secondHead = mid->next;
  mid->next = NULL;
  head = mergeSort(firstHead);
  mid = mergeSort(secondHead);
  return mergeTwoSortedLinkedLists(head, mid);
}

Node *swapNodes(Node *head, int i, int j)
{
  // Write your code here
  if (head == NULL || head->next == NULL && i == j)
  {
    return head;
  }
  if (i > j)
  {
    int c = i;
    i = j;
    j = c;
  }
  Node *prev1 = NULL;
  Node *temp1 = head;
  Node *temp2 = NULL;
  Node *prev2 = NULL;
  Node *temp = head;
  int count = 0;
  while (temp != NULL && count <= j)
  {
    if (count == (i - 1))
    {
      prev1 = temp;
      temp1 = temp->next;
    }
    else if (count == (j - 1))
    {
      prev2 = temp;
      temp2 = temp->next;
    }
    count++;
    temp = temp->next;
  }
  if (temp2 == NULL)
  {
    return head;
  }
  else if (i == 0)
  {
    prev1 = temp1->next;
    temp1->next = temp2->next;
    temp2->next = prev1;
    prev2->next = temp1;
    return temp2;
  }
  else if (abs(i - j) <= 2)
  {
    prev1->next = temp2;
    prev2->next = temp1;
    temp1->next = temp2->next;
    temp2->next = prev2;
  }
  else
  {
    Node *a = temp2->next;
    prev1->next = temp2;
    prev2->next = temp1;
    temp2->next = temp1->next;
    temp1->next = a;
  }
  return head;
}

Node *evenAfterOdd(Node *head)
{
  // write your code here
  if (head == NULL || head->next == NULL)
  {
    return head;
  }
  Node *oddHead = NULL;
  Node *oddTail = NULL;
  Node *evenHead = NULL;
  Node *eventail = NULL;
  Node *temp = head;
  while (temp != NULL)
  {
    if (temp->data % 2 == 0)
    {
      if (evenHead == NULL)
      {
        evenHead = temp;
        eventail = temp;
      }
      else
      {
        eventail->next = temp;
        eventail = temp;
      }
    }
    else
    {
      if (oddHead == NULL)
      {
        oddHead = temp;
        oddTail = temp;
      }
      else
      {
        oddTail->next = temp;
        oddTail = temp;
      }
    }
    temp = temp->next;
  }
  if (oddTail != NULL && eventail != NULL)
  {
    oddTail->next = evenHead;
    eventail->next = NULL;
  }
  if (oddHead != NULL)
  {
    return oddHead;
  }
  else
  {
    return evenHead;
  }
  // Node *temp1 = head;
  // Node *temp2 = head->next;
  // while (temp2 != NULL)
  // {
  //   if (temp1->data % 2 != 0 && temp2->data % 2 != 0)
  //   {
  //     temp1 = temp1->next;
  //     temp2 = temp2->next;
  //   }
  //   else if (temp1->data % 2 != 0 && temp2->data % 2 == 0)
  //   {
  //     temp2 = temp2->next;
  //     while (temp2->data % 2 == 0 && temp2 != NULL)
  //     {
  //       temp2 = temp2->next;
  //     }
  //     temp1->next->next =
  //   }
  // }
}

int length(Node *head)
{
  int count = 1;
  Node *temp = head;
  while (temp->next != NULL)
  {
    count++;
    temp = temp->next;
  }
  return count;
}

Node *rotate(Node *head, int k)
{

  if (head == NULL || head->next == NULL || k == 0)
    return head;
  // calculating length
  Node *temp = head;
  int length = 1;
  while (temp->next != NULL)
  {
    ++length;
    temp = temp->next;
  }
  // link last node to first node
  temp->next = head;
  k = k % length;       // when k is more than length of list
  int end = length - k; // to get end of the list
  while (end--)
    temp = temp->next;
  // breaking last node link and pointing to NULL
  head = temp->next;
  temp->next = NULL;

  return head;

  // Write your code here.
  // if (head == NULL || head->next == NULL || k == 0)
  // {
  //   return head;
  // }
  // int len = length(head);

  // k %= len;
  // int end = len - k;
  // Node *temp = head;
  // Node *prev = NULL;
  // while (end--)
  // {
  //   prev = temp;
  //   temp = temp->next;
  // }
  // Node *tail = temp;
  // while (tail->next != NULL)
  // {
  //   tail = tail->next;
  // }
  // prev->next = NULL;
  // tail->next = head;
  // head = temp;
  // return head;

  // while (k > 0)
  // {
  //   Node *tail = head;
  //   Node *prev = NULL;
  //   while (tail->next != NULL)
  //   {
  //     prev = tail;
  //     tail = tail->next;
  //   }
  //   tail->next = head;
  //   head = tail;
  //   prev->next = NULL;
  //   k--;
  // }
  // return head;
}

Node *skipMdeleteN(Node *head, int M, int N)
{
  // Write your code here
  if (head == NULL)
  {
    return head;
  }
  Node *temp1 = head;
  Node *temp2 = head;
  if (M == 0 && N >= 1)
  {
    while (temp1 != NULL)
    {
      Node *a = temp1;
      temp1 = temp1->next;
      delete a;
    }

    return NULL;
  }
  else if (N == 0)
  {
    return head;
  }
  else
  {
    while (temp1 != NULL && temp2 != NULL)
    {
      int c1 = 1;
      int c2 = 1;
      while (c1 != M && temp1 != NULL)
      {

        temp1 = temp1->next;
        c1++;
      }
      if (temp1 != NULL)
        temp2 = temp1->next;
      else
      {
        temp2->next = NULL;
        temp2 = NULL;
      }

      while (c2 != N && temp2 != NULL)
      {

        Node *a = temp2;
        temp2 = temp2->next;
        delete a;

        c2++;
      }
      if (temp1 != NULL && temp2 != NULL)
      {
        Node *a = temp2;
        temp2 = temp2->next;
        temp1->next = temp2;
        temp1 = temp2;
        delete a;
      }
      else if (temp2 == NULL && temp1 != NULL)
      {
        temp1->next = NULL;
      }
    }
  }
  return head;
}

int findNodeRec(Node *head, int n)
{
  // Write your code here
  // if (head == NULL)
  // {
  //   return -1;
  // }
  // int count = 0;
  // Node *temp = head;
  // while (temp != NULL)
  // {
  //   if (temp->data == n)
  //   {
  //     return count;
  //   }
  //   else
  //   {
  //     temp = temp->next;
  //     count++;
  //   }
  // }
  // return -1;
  if (head == NULL)
  {
    return -1;
  }
  if (head->data == n)
  {
    return 0;
  }
  int smallAns = findNodeRec(head->next, n);
  if (smallAns == -1)
  {
    return -1;
  }
  else
  {
    return smallAns + 1;
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
  // int n, m;
  // cin >> m >> n;
  // head = skipMdeleteN(head, m, n);
  // int n;
  // cin >> n;
  // head = rotate(head, n);
  // head = evenAfterOdd(head);
  // head = swapNodes(head, m, n);
  head = mergeSort(head);
  print(head);
  // cout << findNodeRec(head, n);
  // print(head);
}