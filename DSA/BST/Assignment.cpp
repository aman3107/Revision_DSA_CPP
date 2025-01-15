#include <iostream>
#include "BinaryTreeNodeClass.h"
#include <algorithm>
// #include "BST.h"
#include <queue>
#include <math.h>
using namespace std;

// 1 2 3 4 5 6 7 -1 -1 -1 -1 -1 -1 -1 -1
// 8 5 10 2 6 -1 -1 -1 -1 -1 7 -1 -1

class Pair
{
public:
  bool isBST;
  int maximum;
  int minimum;
  int height;
};
void findNodes(BinaryTreeNode<int> *root, int k, vector<int> &ans)
{
  if (root == NULL)
  {
    return;
  }
  if (k == 0)
  {
    ans.push_back(root->data);
    return;
  }
  findNodes(root->left, k - 1, ans);
  findNodes(root->right, k - 1, ans);
}
int nodesAtDistanceKHelper(BinaryTreeNode<int> *root, int node, int k, vector<int> &ans)
{
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == node)
  {
    findNodes(root, k, ans);
    return 1;
  }
  int left = nodesAtDistanceKHelper(root->left, node, k, ans);
  if (left != -1)
  {
    if (k - left == 0)
    {
      ans.push_back(root->data);
    }
    else
    {
      findNodes(root->right, k - left - 1, ans);
    }
    return left + 1;
  }

  int right = nodesAtDistanceKHelper(root->right, node, k, ans);
  if (right != -1)
  {
    if (k - right == 0)
    {
      ans.push_back(root->data);
    }
    else
    {
      findNodes(root->left, k - right - 1, ans);
    }
    return right + 1;
  }
  return -1;
}

void nodesAtDistanceK(BinaryTreeNode<int> *root, int node, int k)
{
  // Write your code herez
  vector<int> ans;
  nodesAtDistanceKHelper(root, node, k, ans);
  for (int i = 0; i < ans.size(); i++)
  {
    cout << ans[i] << endl;
  }
}

void rootToLeafPathsSumToKHelper(BinaryTreeNode<int> *root, vector<int> v, int k)
{
  if (root == NULL)
  {
    return;
  }
  k = k - root->data;
  v.push_back(root->data);
  if (root->left == NULL && root->right == NULL)
  {
    if (k == 0)
    {
      for (int i = 0; i < v.size(); i++)
      {
        cout << v[i] << " ";
      }
      cout << endl;
      v.pop_back();
      return;
    }
  }
  rootToLeafPathsSumToKHelper(root->left, v, k);
  rootToLeafPathsSumToKHelper(root->right, v, k);
  v.pop_back();
}

void rootToLeafPathsSumToK(BinaryTreeNode<int> *root, int k)
{
  // Write your code here
  vector<int> v;
  rootToLeafPathsSumToKHelper(root, v, k);
}

Pair largestBSTSubtreeHelper(BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    Pair p;
    p.isBST = true;
    p.maximum = INT_MIN;
    p.minimum = INT_MAX;
    p.height = 0;
    return p;
  }

  Pair ans;
  Pair leftAns = largestBSTSubtreeHelper(root->left);
  Pair rightAns = largestBSTSubtreeHelper(root->right);
  ans.maximum = max(root->data, max(leftAns.maximum, rightAns.maximum));
  ans.minimum = min(root->data, min(leftAns.minimum, rightAns.minimum));
  ans.isBST = (root->data > leftAns.maximum) && (root->data <= rightAns.minimum) && leftAns.isBST && rightAns.isBST;
  if (ans.isBST)
    ans.height = max(leftAns.height, rightAns.height) + 1;
  else
  {
    ans.height = max(leftAns.height, rightAns.height);
  }
  return ans;
}
int largestBSTSubtree(BinaryTreeNode<int> *root)
{
  // Write your code here
  return largestBSTSubtreeHelper(root).height;
}

int getLCA(BinaryTreeNode<int> *root, int a, int b)
{
  // Write your code here
  if (root == NULL)
  {
    return -1;
  }
  if (root->data == a || root->data == b)
  {
    return root->data;
  }
  int ans1 = getLCA(root->left, a, b);
  int ans2 = getLCA(root->right, a, b);
  if (ans1 != -1 && ans2 == -1)
  {
    return ans1;
  }
  else if (ans1 == -1 && ans2 != -1)
  {
    return ans2;
  }
  else if (ans1 != -1 && ans2 != -1)
  {
    return root->data;
  }
  else
  {
    return -1;
  }
}

int replaceNodeWithSum(BinaryTreeNode<int> *root, int sum)
{
  if (root == NULL)
  {
    return sum;
  }
  sum = replaceNodeWithSum(root->right, sum);
  sum = sum + root->data;
  root->data = sum;
  return replaceNodeWithSum(root->left, sum);
}

void replaceWithLargerNodesSum(BinaryTreeNode<int> *root)
{
  // Write your code here
  int sum = replaceNodeWithSum(root, 0);
}
void treeToArrayInorder(vector<int> &v, BinaryTreeNode<int> *root)
{
  if (root == NULL)
  {
    return;
  }

  treeToArrayInorder(v, root->left);
  v.push_back(root->data);
  treeToArrayInorder(v, root->right);
}

void printNodesSumToS(BinaryTreeNode<int> *root, int s)
{
  // Write your code here
  vector<int> arr;
  treeToArrayInorder(arr, root);
  int i = 0;
  int j = arr.size() - 1;
  while (i < j)
  {
    if (arr[i] + arr[j] == s)
    {
      cout << arr[i] << " " << arr[j] << endl;
      i++;
      j--;
    }
    else if (arr[i] + arr[j] > s)
    {
      j--;
    }
    else
    {
      i++;
    }
  }
}

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
  int node, k;
  cin >> node;
  cin >> k;
  nodesAtDistanceK(root, node, k);
  // int k;
  // cin >> k;
  // rootToLeafPathsSumToK(root, k);
  // cout << largestBSTSubtree(root) << endl;
  // int a, b;
  // cin >> a >> b;
  // cout << getLCA(root, a, b);
  // inOrder(root);
  // printLevelATNewLine(root);
  // replaceWithLargerNodesSum(root);
  // int sum;
  // cin >> sum;
  // pairSum1(root, sum);
  // preOrder(root);
  // cout << endl;
  // postOrder(root);

  // cout << findPair(root, sum);
  // pairSum(root, sum);
  // insertDuplicateNode(root);
  // printLevelATNewLine(root);
  delete root;
}