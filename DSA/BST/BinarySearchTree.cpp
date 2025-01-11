#include <iostream>
#include <queue>
#include "BinaryTreeNodeClass.h"
#include "math.h"
using namespace std;
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 3 1 6 5 7 -1 -1 -1 -1 -1 -1 -1 -1
// 4 2 6 1 10 5 7 -1 -1 -1 -1 -1 -1 -1 -1
template <typename T>
class Node
{
public:
  T data;
  Node<T> *next;

  Node(T data)
  {
    this->data = data;
    this->next = NULL;
  }
};

Node<int> *constructLinkedList(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return NULL;
  }
  Node<int> *leftHead = constructLinkedList(root->left);
  Node<int> *leftTail = leftHead;
  Node<int> *rootHead = new Node<int>(root->data);
  while (leftTail != NULL && leftTail->next != NULL)
  {
    leftTail = leftTail->next;
  }
  if (leftHead == NULL)
  {
    leftHead = rootHead;
  }
  else
  {
    leftTail->next = rootHead;
  }
  Node<int> *rightHead = constructLinkedList(root->right);

  if (rightHead != NULL)
  {
    rootHead->next = rightHead;
  }
  return leftHead;
}

BinaryTreeNode<int> *constructTreeHelper(int *input, int si, int ei)
{
  if (si > ei)
  {
    return NULL;
  }
  int mid = (si + ei) / 2;
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(input[mid]);
  root->left = constructTreeHelper(input, si, mid - 1);
  root->right = constructTreeHelper(input, mid + 1, ei);
  return root;
}

BinaryTreeNode<int> *constructTree(int *input, int n)
{
  // Write your code here
  return constructTreeHelper(input, 0, n - 1);
}

bool isBST2(BinaryTreeNode<int> *root, int min = INT_MIN, int max = INT_MAX)
{
  if (root == NULL)
  {
    return true;
  }
  if (root->data < min || root->data > max)
  {
    return false;
  }
  bool isLeftOk = isBST2(root->left, min, root->data - 1);
  bool isRightOk = isBST2(root->right, root->data, max);
  return isLeftOk && isRightOk;
}

class Pair
{
public:
  bool isBST;
  int maximum;
  int minimum;
};

Pair isBSTBetter1(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    Pair p;
    p.isBST = true;
    p.maximum = INT_MIN;
    p.minimum = INT_MAX;
    return p;
  }

  Pair ans;
  Pair leftAns = isBSTBetter1(root->left);
  Pair rightAns = isBSTBetter1(root->right);
  ans.maximum = max(root->data, max(leftAns.maximum, rightAns.maximum));
  ans.minimum = min(root->data, min(leftAns.minimum, rightAns.minimum));
  ans.isBST = (root->data > leftAns.maximum) && (root->data <= rightAns.minimum) && leftAns.isBST && rightAns.isBST;
  return ans;
}

int minimum(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return INT_MAX;
  }
  return min(root->data, min(minimum(root->left), minimum(root->right)));
}

int maximum(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return INT_MIN;
  }
  return max(root->data, max(maximum(root->left), maximum(root->right)));
}

bool isBSTBetter(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return true;
  }
  int leftMax = maximum(root->left);
  int rightMin = minimum(root->right);
  bool output = (root->data > leftMax) && (root->data <= rightMin) && isBSTBetter(root->left) && isBSTBetter(root->right);
  return output;
}

bool isBST(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return true;
  }
  if (root->left != NULL && root->data < root->left->data)
  {
    return false;
  }
  if (root->right != NULL && root->data > root->right->data)
  {
    return false;
  }
  bool leftAns = isBST(root->left);
  bool rightAns = isBST(root->right);
  return (leftAns && rightAns);
}

void elementsInRangeK1K2(BinaryTreeNode<int> *root, int k1, int k2)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  if (root->data >= k2 || root->data >= k1)
  {
    elementsInRangeK1K2(root->left, k1, k2);
  }
  if (k1 <= root->data && k2 >= root->data)
  {
    cout << root->data << " ";
  }
  if (root->data <= k1 || root->data <= k2)
  {
    elementsInRangeK1K2(root->right, k1, k2);
  }
}

bool searchInBST(BinaryTreeNode<int> *root, int k)
{
  // Write your code here
  if (root == NULL)
  {
    return false;
  }

  if (root->data == k)
  {
    return true;
  }
  if (root->data > k)
  {
    return searchInBST(root->left, k);
  }

  return searchInBST(root->right, k);
}

void printTreeLevelWise(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *front = q.front();
    q.pop();
    cout << front->data << ":";
    if (front->left != NULL)
    {
      q.push(front->left);
      cout << "L:" << front->left->data << ",";
    }
    else
    {
      cout << "L:" << "-1" << ",";
    }
    if (front->right != NULL)
    {
      q.push(front->right);
      cout << "R:" << front->right->data;
    }
    else
    {
      cout << "R:" << "-1";
    }
    cout << endl;
  }
}

BinaryTreeNode<int> *takeInput()
{
  queue<BinaryTreeNode<int> *> q;
  int rootData;
  cout << "Enter root data: " << endl;
  cin >> rootData;
  if (rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *front = q.front();
    q.pop();
    int leftData;
    cout << "Enter left child of: " << front->data << endl;
    cin >> leftData;
    if (leftData != -1)
    {
      BinaryTreeNode<int> *left = new BinaryTreeNode<int>(leftData);
      q.push(left);
      front->left = left;
    }
    int rightData;
    cout << "Enter right child of: " << front->data << endl;
    cin >> rightData;
    if (rightData != -1)
    {
      BinaryTreeNode<int> *right = new BinaryTreeNode<int>(rightData);
      q.push(right);
      front->right = right;
    }
  }
  return root;
}

int main()
{
  BinaryTreeNode<int> *root = takeInput();
  Node<int> *head = constructLinkedList(root);

  while (head != NULL)
  {
    cout << head->data << " ";
    head = head->next;
  }
  /*
  int size;
  cin >> size;
  int *input = new int[size];

  for (int i = 0; i < size; i++)
    cin >> input[i];

  BinaryTreeNode<int> *root = constructTree(input, size);
  printTreeLevelWise(root);
  */
  // BinaryTreeNode<int> *root = takeInput();
  // cout << isBST2(root) << endl;
  // Pair p = isBSTBetter1(root);
  // cout << p.maximum << " " << p.minimum << " " << p.isBST;
  // cout << isBSTBetter(root) << endl;
  // cout << isBST(root) << endl;
  // int k1, k2;
  // cin >> k1;
  // cin >> k2;
  // elementsInRangeK1K2(root, k1, k2);
  // cout << searchInBST(root, k) << endl;
  // printTreeLevelWise(root);
  // delete[] input;
  delete root;
}