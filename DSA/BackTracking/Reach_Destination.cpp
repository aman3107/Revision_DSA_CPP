#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool reachDestination(int sx, int sy, int dx, int dy)
{
  // Write your code here
  if (sx > dx || sy > dy)
  {
    return false;
  }
  if (sx == dx && sy == dy)
  {
    return true;
  }
  if (dx > dy)
  {
    reachDestination(sx, sy, dx - dy, dy);
  }
  else
  {
    reachDestination(sx, sy, dx, dy - dx);
  }
}

int main()
{

  int a, b, c, d;
  cin >> a >> b >> c >> d;

  if (reachDestination(a, b, c, d))
  {
    cout << "true" << endl;
  }
  else
  {
    cout << "false" << endl;
  }
}
