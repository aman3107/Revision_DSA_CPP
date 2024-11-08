#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<int, char> a, pair<int, char> b)
{
  return a.second < b.second;
}

int main()
{
  // pair<int, char> p;
  // pair<int, char> p1(10, 'A');
  // pair<int, char> p2 = {10, 'B'};
  // pair<int, char> p3 = make_pair(10, 'A');
  // cout << p1.first << " " << p1.second << endl;
  // cout << p2.first << " " << p2.second << endl;
  // cout << p3.first << " " << p3.second << endl;
  // cout << (p2 < p3) << endl;
  int n, roll_number;
  cin >> n;
  char section;
  vector<pair<int, char>> students;
  for (int i = 0; i < n; i++)
  {
    cin >> roll_number >> section;
    students.push_back({roll_number, section});
  }

  // sort(students.begin(), students.end());       // Sort based on first values
  sort(students.begin(), students.end(), comp); // Sort based on second values

  for (int i = 0; i < students.size(); i++)
  {
    cout << students[i].first << " " << students[i].second << endl;
  }
}