#include <iostream>
#include "BinaryTreeNodeClass.h"
using namespace std;

class BST
{
  BinaryTreeNode<int> *root;

public:
  BST()
  {
    root = NULL;
  }
  ~BST()
  {
    delete root;
  }

private:
  BinaryTreeNode<int> *deleteData(int data, BinaryTreeNode<int> *node)
  {
    if (node == NULL)
    {
      return NULL;
    }

    if (data > node->data)
    {
      node->right = deleteData(data, node->right);
      return node;
    }
    else if (data < node->data)
    {
      node->left = deleteData(data, node->left);
      return node;
    }
    else
    {
      if (node->left == NULL && node->right == NULL)
      {
        delete node;
        return NULL;
      }
      else if (node->left == NULL)
      {
        BinaryTreeNode<int> *temp = node->right;
        node->right = NULL;
        delete node;
        return temp;
      }
      else if (node->right == NULL)
      {
        BinaryTreeNode<int> *temp = node->left;
        node->left = NULL;
        delete node;
        return temp;
      }
      else
      {
        BinaryTreeNode<int> *minNode = node->right;
        while (minNode->left != NULL)
        {
          minNode = minNode->left;
        }
        int rightMin = minNode->data;
        node->data = rightMin;
        node->right = deleteData(rightMin, node->right);
        return node;
      }
    }
  }

  BinaryTreeNode<int> *insertHelper(BinaryTreeNode<int> *root, int data)
  {
    if (root == NULL)
    {
      BinaryTreeNode<int> *newNode = new BinaryTreeNode<int>(data);
      return newNode;
    }
    if (data < root->data)
    {
      root->left = insertHelper(root->left, data);
    }
    else
    {
      root->right = insertHelper(root->right, data);
    }
    return root;
  }
  void printTree(BinaryTreeNode<int> *root)
  {
    if (root == NULL)
    {
      return;
    }
    cout << root->data << ":";
    if (root->left != NULL)
    {
      cout << "L:" << root->left->data << ",";
    }

    if (root->right != NULL)
    {
      cout << "R:" << root->right->data;
    }
    cout << endl;
    printTree(root->left);
    printTree(root->right);
  }
  bool hasData(BinaryTreeNode<int> *node, int data)
  {
    if (node == NULL)
    {
      return false;
    }
    if (node->data == data)
    {
      return true;
    }
    if (node->data > data)
    {
      return hasData(node->left, data);
    }

    return hasData(node->right, data);
  }

public:
  void insert(int data)
  {
    root = insertHelper(root, data);
  }
  void remove(int data)
  {
    root = deleteData(data, root);
  }

  void print()
  {
    printTree(this->root);
  }
  bool search(int data)
  {
    return hasData(root, data);
  }
};