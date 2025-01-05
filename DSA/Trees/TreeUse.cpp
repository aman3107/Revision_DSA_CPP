#include <iostream>
#include <queue>
#include <math.h>
#include "TreeNodeClass.h"
using namespace std;

int getLeafNodeCount(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return 0;
  }
  if (root->children.size() == 0)
  {
    return 1;
  }
  int ans = 0;
  for (int i = 0; i < root->children.size(); i++)
  {
    ans = ans + getLeafNodeCount(root->children[i]);
  }
  return ans;
}

void printAtLevelK(TreeNode<int> *root, int k)
{
  if (root == NULL)
  {
    return;
  }
  if (k == 0)
  {
    cout << root->data << endl;
    return;
  }
  for (int i = 0; i < root->children.size(); i++)
  {
    printAtLevelK(root->children[i], k - 1);
  }
}

int getHeight(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return 0;
  }
  int max = 0;
  for (int i = 0; i < root->children.size(); i++)
  {
    int childHeight = getHeight(root->children[i]);
    if (childHeight > max)
    {
      max = childHeight;
    }
  }
  return max + 1;
}

TreeNode<int> *maxDataNodeBetter(TreeNode<int> *root)
{
  // Write your code here
  if (root == NULL)
  {
    return root;
  }
  TreeNode<int> *max = root;
  for (int i = 0; i < root->children.size(); i++)
  {
    TreeNode<int> *maxChild = maxDataNodeBetter(root->children[i]);
    if (max->data < maxChild->data)
    {
      max = maxChild;
    }
  }
  return max;
}
void maxDataNodeHelper(TreeNode<int> *&child, TreeNode<int> *&maxNode)
{
  if (child == NULL)
  {
    return;
  }
  if (maxNode->data < child->data)
  {
    maxNode = child;
  }
  for (int i = 0; i < child->children.size(); i++)
  {
    maxDataNodeHelper(child->children[i], maxNode);
  }
}

TreeNode<int> *maxDataNode(TreeNode<int> *root)
{
  // Write your code here
  TreeNode<int> *ans = root;
  maxDataNodeHelper(root, ans);
  return ans;
}

int sumOfNodes(TreeNode<int> *root)
{
  // Write your code here
  int sum = root->data;
  for (int i = 0; i < root->children.size(); i++)
  {
    sum = sum + sumOfNodes(root->children[i]);
  }
  return sum;
}

int countNodes(TreeNode<int> *root)
{
  int ans = 1;
  for (int i = 0; i < root->children.size(); i++)
  {
    ans = ans + countNodes(root->children[i]);
  }
  return ans;
}

void printLevelWise(TreeNode<int> *root)
{
  queue<TreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    TreeNode<int> *front = q.front();
    q.pop();
    cout << front->data << ": ";
    for (int i = 0; i < front->children.size(); i++)
    {
      if (i != front->children.size() - 1)
        cout << front->children[i]->data << ",";
      else
        cout << front->children[i]->data;
      q.push(front->children[i]);
    }
    cout << endl;
  }
}

TreeNode<int> *takeInputLevelWise()
{
  int rootData;
  cout << "Enter root data :" << endl;
  cin >> rootData;
  TreeNode<int> *root = new TreeNode<int>(rootData);
  queue<TreeNode<int> *> q;
  q.push(root);
  while (!q.empty())
  {
    TreeNode<int> *front = q.front();
    q.pop();
    int n;
    cout << "Enter number of children of : " << front->data << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      int childData;
      cout << "Enter :" << i << "th child of " << front->data << endl;
      cin >> childData;
      TreeNode<int> *child = new TreeNode<int>(childData);
      front->children.push_back(child);
      q.push(child);
    }
  }
  return root;
}

TreeNode<int> *takeInput()
{
  int rootData;
  cout << "Enter data :" << endl;
  cin >> rootData;
  TreeNode<int> *root = new TreeNode<int>(rootData);

  int n;
  cout << "Enter number of children of  :" << rootData << endl;
  cin >> n;
  for (int i = 0; i < n; i++)
  {
    TreeNode<int> *child = takeInput();
    root->children.push_back(child);
  }
  return root;
}

void print(TreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  cout << root->data << ": ";
  for (int i = 0; i < root->children.size(); i++)
  {
    cout << root->children[i]->data << ",";
  }
  cout << endl;
  for (int i = 0; i < root->children.size(); i++)
  {
    print(root->children[i]);
  }
}

void postOrder(TreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }
  for (int i = 0; i < root->children.size(); i++)
  {
    postOrder(root->children[i]);
  }
  cout << root->data << " ";
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

void deleteTree(TreeNode<int> *root)
{
  for (int i = 0; i < root->children.size(); i++)
  {
    deleteTree(root->children[i]);
  }
  delete root;
}
// 10 3 20 30 40 2 50 60 2 70 80 0 0 0 0 0
int main()
{
  /*
  TreeNode<int> *root = new TreeNode<int>(10);
  TreeNode<int> *node1 = new TreeNode<int>(20);
  TreeNode<int> *node2 = new TreeNode<int>(30);
  root->children.push_back(node1);
  root->children.push_back(node2);
  */
  // TreeNode<int> *root = takeInput();
  // print(root);

  TreeNode<int> *root = takeInputLevelWise();
  preOrder(root);
  postOrder(root);
  // cout << getLeafNodeCount(root) << endl;
  // printAtLevelK(root, 1);
  // printLevelWise(root);
  // cout << getHeight(root) << endl;
  // cout << countNodes(root) << endl;
  // cout << sumOfNodes(root) << endl;
  // TreeNode<int> *ans = maxDataNodeBetter(root);
  // cout << ans->data << endl;
  // deleteTree(root);
  delete root;
}