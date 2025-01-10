#include <iostream>
#include "BinaryTreeNodeClass.h"
#include <math.h>
#include <queue>
using namespace std;

void printNodesWithoutSibling(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  if (root->left != NULL && root->right == NULL)
  {
    cout << root->left->data << " ";
  }
  if (root->right != NULL && root->left == NULL)
  {
    cout << root->right->data << " ";
  }
  printNodesWithoutSibling(root->left);
  printNodesWithoutSibling(root->right);
}

pair<int, int> getMinAndMax(BinaryTreeNode<int> *root)
{
  //
  if (root == NULL)
  {
    pair<int, int> p;
    p.first = INT_MAX;
    p.second = INT_MIN;
    return p;
  }
  pair<int, int> ans;
  ans.first = root->data;
  ans.second = root->data;
  pair<int, int> left = getMinAndMax(root->left);
  pair<int, int> right = getMinAndMax(root->right);
  if (ans.first > left.first)
  {
    ans.first = left.first;
  }
  if (ans.first > right.first)
  {
    ans.first = right.first;
  }
  if (ans.second < left.second)
  {
    ans.second = left.second;
  }
  if (ans.second < right.second)
  {
    ans.second = right.second;
  }
  return ans;
}

BinaryTreeNode<int> *removeLeafNodes(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  if (root->left == NULL && root->right == NULL)
  {

    return NULL;
  }
  root->left = removeLeafNodes(root->left);
  root->right = removeLeafNodes(root->right);

  return root;
}

void printLevelWise(BinaryTreeNode<int> *root)
{
  // Write your code here
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

int getSum(BinaryTreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return 0;
  }
  return root->data + getSum(root->left) + getSum(root->right);
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

int main()
{
  BinaryTreeNode<int> *root = takeInputLevelWise();
  printNodesWithoutSibling(root);
  // pair<int, int> p = getMinAndMax(root);
  // cout << p.first << " " << p.second << endl;

  // root = removeLeafNodes(root);
  // printLevelWise(root);
  // cout << getSum(root) << endl;
  delete root;
}
