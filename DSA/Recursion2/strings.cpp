#include <iostream>
using namespace std;

int main()
{
  string *sp = new string;
  *sp = "def";
  cout << sp << endl;
  cout << *sp << endl;
  string s = "abc";
  cout << s << endl;

  string s1;
  getline(cin, s1);
  char ch[10];
  cin.getline(ch, 10);
  cout << s1 << " " << ch << endl;

  string s2 = s + s1;
  cout << s2 << endl;
  cout << s2.size() << endl;
  cout << s2.substr(3, 3) << endl;
  cout << s2.find('a') << endl;
}