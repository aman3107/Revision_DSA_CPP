#include <iostream>
#include "BinaryTreeNodeClass.h"
#include <math.h>
#include <queue>
#include <vector>
using namespace std;

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

vector<int> preOrder(BinaryTreeNode<int> *root)
{
  // Write your code here.
  static vector<int> v;
  if (root == NULL)
  {
    return v;
  }
  v.push_back(root->data);
  preOrder(root->left);
  preOrder(root->right);
  return v;
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

void mirrorBinaryTree(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  mirrorBinaryTree(root->left);
  mirrorBinaryTree(root->right);
  BinaryTreeNode<int> *temp = root->left;
  root->left = root->right;
  root->right = temp;
}

int height(BinaryTreeNode<int> *root)
{
  // Write our code here
  if (root == NULL)
  {
    return 0;
  }
  return max(height(root->left), height(root->right)) + 1;
  // int ans = 1;
  // int leftNode = height(root->left);
  // int rightNode = height(root->right);
  // if (leftNode > rightNode)
  // {
  //   ans = ans + leftNode;
  // }
  // else if (leftNode < rightNode)
  // {
  //   ans = ans + rightNode;
  // }
  // else
  // {
  //   ans = ans + leftNode;
  // }
  // return ans;
}

bool isNodePresent(BinaryTreeNode<int> *root, int x)
{
  // Write your code here
  if (root == NULL)
  {
    return false;
  }
  if (root->data == x)
  {
    return true;
  }
  bool leftNode = isNodePresent(root->left, x);
  bool rightNode = isNodePresent(root->right, x);
  if (leftNode || rightNode)
  {
    return true;
  }
  return false;
}

int countNode(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return 0;
  }
  int totalCount = 1;
  int leftCount = countNode(root->left);
  int rightCount = countNode(root->right);
  return totalCount + leftCount + rightCount;
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

void printTree(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << ": ";
  if (root->left)
  {
    cout << "L" << root->left->data << ",";
  }
  if (root->right)
  {
    cout << "R" << root->right->data;
  }
  cout << endl;
  printTree(root->left);
  printTree(root->right);
}

BinaryTreeNode<int> *takeInputLevelWise()
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

BinaryTreeNode<int> *takeInput()
{
  int rootData;
  cout << "Enter data :" << endl;
  cin >> rootData;
  if (rootData == -1)
  {
    return NULL;
  }
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
  BinaryTreeNode<int> *left = takeInput();
  BinaryTreeNode<int> *right = takeInput();
  root->left = left;
  root->right = right;
  return root;
}

// 1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1

int main()
{
  /*
  BinaryTreeNode<int> *root = new BinaryTreeNode<int>(1);
  BinaryTreeNode<int> *node1 = new BinaryTreeNode<int>(2);
  BinaryTreeNode<int> *node2 = new BinaryTreeNode<int>(3);
  root->left = node1;
  root->right = node2;
  printTree(root);
  delete root;
  */
  BinaryTreeNode<int> *root = takeInputLevelWise();
  postOrder(root);
  cout << endl;
  vector<int> v = preOrder(root);
  for (int i = 0; i < v.size(); i++)
  {
    cout << v[i] << " ";
  }
  cout << endl;
  inOrder(root);
  // mirrorBinaryTree(root);
  // cout << height(root) << endl;
  // cout << isNodePresent(root, -1) << endl;
  // cout << countNode(root) << endl;
  // printTreeLevelWise(root);
  delete root;
}