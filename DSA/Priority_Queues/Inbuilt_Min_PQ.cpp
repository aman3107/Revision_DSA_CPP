#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main()
{
  priority_queue<int, vector<int>, greater<int>> p;
  p.push(5);
  p.push(6);
  p.push(9);
  p.push(12);
  p.push(3);
  p.push(13);
  p.push(2);
  while (!p.empty())
  {
    cout << p.top() << endl;
    p.pop();
  }
}