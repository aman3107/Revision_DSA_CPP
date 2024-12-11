#include <iostream>
#include "Dynamic_Array.cpp"
using namespace std;

int main()
{
  DynamicArray arr1;
  arr1.add(1);
  arr1.add(2);
  arr1.add(3);
  arr1.add(4);
  arr1.add(5);
  arr1.add(6);
  DynamicArray arr2(arr1);
  arr1.add(7);
  arr1.add(8);
  DynamicArray arr3;
  arr3 = arr1;
  arr1.add(1, 9);
  arr1.print();
  arr2.print();
  arr3.print();
}