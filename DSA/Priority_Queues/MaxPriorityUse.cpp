#include <iostream>
#include "MaxPriorityQueue.h"
using namespace std;

int main()
{
  PriorityQueue p;
  p.insert(12);
  p.insert(6);
  p.insert(5);
  p.insert(100);
  p.insert(1);
  p.insert(9);
  p.insert(0);
  p.insert(14);
  cout << p.getSize() << endl;
  cout << p.getMax() << endl;

  while (!p.isEmpty())
  {
    cout << p.removeMax() << endl;
  }
}