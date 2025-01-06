#include <iostream>
#include "TreeNodeClass.h"
#include <queue>
using namespace std;

void replaceWithDepthValueHelper(TreeNode<int> *root, int l)
{
  root->data = l;
  for (int i = 0; i < root->children.size(); i++)
  {
    replaceWithDepthValueHelper(root->children[i], l + 1);
  }
}

void replaceWithDepthValue(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return;
  }
  replaceWithDepthValueHelper(root, 0);
}

TreeNode<int> *getSecondLargestNodeHelper(TreeNode<int> *root, int maxData)
{
  TreeNode<int> *nextMax = NULL;
  int secMax = 0;
  if (root->data > secMax && root->data != maxData)
  {
    secMax = root->data;
    nextMax = root;
  }

  for (int i = 0; i < root->children.size(); i++)
  {
    TreeNode<int> *child = getSecondLargestNodeHelper(root->children[i], maxData);
    if (child != NULL && (child->data > secMax && child->data != maxData))
    {
      secMax = child->data;
      nextMax = child;
    }
  }
  return nextMax;
}
int getMax(TreeNode<int> *root)
{
  int max = root->data;
  for (int i = 0; i < root->children.size(); i++)
  {
    int childData = getMax(root->children[i]);
    if (max < childData)
    {
      max = childData;
    }
  }
  return max;
}

TreeNode<int> *getSecondLargestNode(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  return (getSecondLargestNodeHelper(root, getMax(root)));
}

TreeNode<int> *getNextLargerElement(TreeNode<int> *root, int x)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  TreeNode<int> *nextMax = NULL;
  if (root->data > x)
  {
    nextMax = root;
  }
  for (int i = 0; i < root->children.size(); i++)
  {
    TreeNode<int> *child = getNextLargerElement(root->children[i], x);
    if (nextMax == NULL)
    {
      nextMax = child;
    }
    else if (child != NULL && nextMax->data > child->data)
    {
      nextMax = child;
    }
  }
  return nextMax;
}
bool areIdentical(TreeNode<int> *root1, TreeNode<int> *root2)
{
  // Write your code here
  if (root1 == NULL || root2 == NULL)
  {
    return false;
  }
  if ((root1->data != root2->data) || (root1->children.size() != root2->children.size()))
  {
    return false;
  }
  for (int i = 0, j = 0; i < root1->children.size() && j < root2->children.size(); i++, j++)
  {
    bool childAns = areIdentical(root1->children[i], root2->children[j]);
    if (childAns == false)
    {
      return false;
    }
  }
  return true;
}

TreeNode<int> *maxSumNode(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  TreeNode<int> *maxNode = root;
  int sum = maxNode->data;
  for (int i = 0; i < root->children.size(); i++)
  {
    sum += +root->children[i]->data;
  }
  for (int i = 0; i < root->children.size(); i++)
  {
    TreeNode<int> *childNode = maxSumNode(root->children[i]);
    int xSum = childNode->data;
    for (int i = 0; i < childNode->children.size(); i++)
    {
      xSum += childNode->children[i]->data;
    }
    if (sum < xSum)
    {
      maxNode = childNode;
    }
  }
  return maxNode;
}

int getLargeNodeCount(TreeNode<int> *root, int x)
{
  // Write your code here
  if (root == NULL)
  {
    return 0;
  }
  int ans = 0;
  if (root->data > x)
  {
    ans = 1;
  }
  for (int i = 0; i < root->children.size(); i++)
  {
    int childAns = getLargeNodeCount(root->children[i], x);
    ans = ans + childAns;
  }
  return ans;
}

bool isPresent(TreeNode<int> *root, int x)
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
  for (int i = 0; i < root->children.size(); i++)
  {
    bool childAns = isPresent(root->children[i], x);
    if (childAns == true)
    {
      return true;
    }
  }
  return false;
}

void preOrder(TreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << " ";
  for (int i = 0; i < root->children.size(); i++)
  {
    preOrder(root->children[i]);
  }
}

TreeNode<int> *takeInput()
{
  int rootData;
  cout << "Enter root data : " << endl;
  cin >> rootData;
  TreeNode<int> *root = new TreeNode<int>(rootData);
  queue<TreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    TreeNode<int> *front = q.front();
    q.pop();
    cout << "Enter number of children of: " << front->data << endl;
    int numchild;
    cin >> numchild;
    for (int i = 0; i < numchild; i++)
    {
      cout << "Enter " << i << "th child of " << front->data << endl;
      int childData;
      cin >> childData;
      TreeNode<int> *child = new TreeNode<int>(childData);
      front->children.push_back(child);
      q.push(child);
    }
  }
  return root;
}

// 10 3 20 30 40 2 50 60 0 0 0 0

int main()
{
  TreeNode<int> *root = takeInput();
  // replaceWithDepthValue(root);
  // preOrder(root);
  // cout << getMax(root);
  cout << getSecondLargestNode(root)->data << endl;
  // cout << getNextLargerElement(root, 18)->data << endl;
  delete root;
  // cout << maxSumNode(root)->data << endl;
  // cout << getLargeNodeCount(root, 35);
  // cout << isPresent(root, 0) << endl;
  // preOrder(root);
  // TreeNode<int> *root1 = takeInput();
  // TreeNode<int> *root2 = takeInput();
  // cout << areIdentical(root1, root2);

  // delete root1;
  // delete root2;
}