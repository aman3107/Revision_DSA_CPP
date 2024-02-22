#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

bool comp(pair<int, char> a, pair<int, char> b)
{
  return a.second < b.second;
}

int main()
{
  vector<pair<int, char>> numChar;
  int n;
  cin >> n;
  int num;
  char ch;
  for (int i = 0; i < n; i++)
  {
    cin >> num >> ch;
    numChar.push_back({num, ch});
  }
  sort(numChar.begin(), numChar.end(), comp);
  for (int i = 0; i < n; i++)
  {
    cout << numChar[i].first << " " << numChar[i].second << endl;
  }
  // pair<int, char> p;
  // pair<int, char> p1(10, 'A');
  // pair<int, char> p2 = {10, 'A'};
  // pair<int, char> p3 = make_pair(10, 'A');

  // cout << p1.first << " " << p1.second << endl;
}