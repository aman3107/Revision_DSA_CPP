#include <iostream>
#include "BinaryTreeNodeClass.h"
#include <algorithm>
// #include "BST.h"
#include <queue>
#include <math.h>
using namespace std;

// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1

void treeToArray(vector<int> &v, BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  v.push_back(root->data);
  treeToArray(v, root->left);
  treeToArray(v, root->right);
}

void pairSum1(BinaryTreeNode<int> *root, int sum)
{
  vector<int> v;
  treeToArray(v, root);
  sort(v.begin(), v.end());
  int i = 0;
  int j = v.size() - 1;
  while (i < j)
  {
    if (v[i] + v[j] == sum)
    {
      cout << v[i] << " " << v[j] << endl;
      i++;
      j--;
    }
    else if (v[i] + v[j] < sum)
    {
      i++;
    }
    else
    {
      j--;
    }
  }
}

bool findPair(BinaryTreeNode<int> *curr, int n)
{
  if (curr == NULL)
  {
    return false;
  }
  if (curr->data == n)
  {
    curr->data = INT_MIN;
    return true;
  }
  return (findPair(curr->left, n) || findPair(curr->right, n));
}

void pairSumHelper(BinaryTreeNode<int> *curr, int sum, BinaryTreeNode<int> *root)
{
  if (curr == NULL)
  {
    return;
  }
  int data = curr->data;
  if (data != INT_MIN)
  {
    bool isFound = findPair(root, sum - data);
    if (isFound)
    {
      cout << min(sum - data, data) << " " << max(sum - data, data) << endl;
    }
  }

  pairSumHelper(curr->left, sum, root);
  pairSumHelper(curr->right, sum, root);
}

void pairSum(BinaryTreeNode<int> *root, int sum)
{
  // Write your code here
  pairSumHelper(root, sum, root);
}

BinaryTreeNode<int> *insertDuplicateNodeHelper(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  int rootData = root->data;

  BinaryTreeNode<int> *temp = root->left;
  BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(rootData);
  root->left = newNode;
  newNode->left = temp;

  insertDuplicateNodeHelper(temp);
  insertDuplicateNodeHelper(root->right);
  return root;
}
void insertDuplicateNode(BinaryTreeNode<int> *root)
{
  // Write your code here
  root = insertDuplicateNodeHelper(root);
  // if (root == NULL)
  // {
  //   return;
  // }
  // int rootData = root->data;

  // BinaryTreeNode<int> *temp = root->left;
  // BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(rootData);
  // root->left = newNode;
  // newNode->left = temp;
  // insertDuplicateNode(temp);
  // insertDuplicateNode(root->right);
}

BinaryTreeNode<int> *takeInput()
{
  int rootData;
  cin >> rootData;
  if (rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    BinaryTreeNode<int> *currentNode = q.front();
    q.pop();
    int leftChild, rightChild;
    cin >> leftChild;
    if (leftChild != -1)
    {
      BinaryTreeNode<int> *leftNode = new BinaryTreeNode<int>(leftChild);
      currentNode->left = leftNode;
      q.push(leftNode);
    }
    cin >> rightChild;
    if (rightChild != -1)
    {
      BinaryTreeNode<int> *rightNode =
          new BinaryTreeNode<int>(rightChild);
      currentNode->right = rightNode;
      q.push(rightNode);
    }
  }
  return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root)
{
  queue<BinaryTreeNode<int> *> q;
  q.push(root);
  q.push(NULL);
  while (!q.empty())
  {
    BinaryTreeNode<int> *first = q.front();
    q.pop();
    if (first == NULL)
    {
      if (q.empty())
      {
        break;
      }
      cout << endl;
      q.push(NULL);
      continue;
    }
    cout << first->data << " ";
    if (first->left != NULL)
    {
      q.push(first->left);
    }
    if (first->right != NULL)
    {
      q.push(first->right);
    }
  }
}

void inOrder(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  inOrder(root->left);
  cout << root->data << " ";
  inOrder(root->right);
}
void postOrder(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  postOrder(root->left);
  postOrder(root->right);
  cout << root->data << " ";
}

void preOrder(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  preOrder(root->left);
  preOrder(root->right);
}

int main()
{
  BinaryTreeNode<int> *root = takeInput();
  int sum;
  cin >> sum;
  pairSum1(root, sum);
  // preOrder(root);
  // cout << endl;
  // postOrder(root);

  // cout << findPair(root, sum);
  // pairSum(root, sum);
  // insertDuplicateNode(root);
  // printLevelATNewLine(root);
  delete root;
}