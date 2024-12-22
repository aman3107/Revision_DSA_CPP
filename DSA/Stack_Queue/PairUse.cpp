#include <iostream>
#include "Templates.cpp"
using namespace std;

int main()
{
  /*
  Pair<int> p1;
  p1.setX(10);
  p1.setY(20);
  cout << p1.getX() << endl;
  cout << p1.getY() << endl;

  Pair<double> p2;
  p2.setX(10.21);
  p2.setY(20.12);
  cout << p2.getX() << endl;
  cout << p2.getY() << endl;
  */

  /*
   Pair<int, double> p1;
   p1.setX(10);
   p1.setY(10.21);
   cout << p1.getX() << " " << p1.getY() << endl;
   */
  Pair<Pair<int, int>, int> p1;
  Pair<int, int> p2;
  p2.setX(10);
  p2.setY(20);
  p1.setY(30);
  p1.setX(p2);
  cout << p1.getX().getX() << " " << p1.getX().getY() << " " << p1.getY() << endl;
}