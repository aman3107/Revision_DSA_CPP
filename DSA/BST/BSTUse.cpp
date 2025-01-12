#include <iostream>
#include "BST.h"
using namespace std;
// 4 2 6 1 3 5 7 -1 -1 -1 -1 -1 -1 -1 -1

int main()
{
  BST b1;
  b1.insert(4);
  b1.insert(2);
  b1.insert(6);
  b1.insert(1);
  b1.insert(3);
  b1.insert(5);
  b1.insert(7);
  b1.remove(6);

  b1.print();
  cout << b1.search(10);
  delete &b1;
}