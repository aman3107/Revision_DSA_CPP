#include <iostream>
#include <string>
#include "HashMap.h"
using namespace std;

int main()
{
  HashMap<int> h;
  for (int i = 0; i < 10; i++)
  {
    char c = '0' + i;
    string key = "abc";
    key = key + c;
    int value = i + 1;
    h.insert(key, value);
    // cout << h.getLoadFactor() << endl;
  }
  cout << h.getSize() << endl;
  h.remove("abc2");
  h.remove("abc7");

  for (int i = 0; i < 10; i++)
  {
    char c = '0' + i;
    string key = "abc";
    key = key + c;
    cout << h.getValue(key) << endl;
  }
  cout << h.getSize() << endl;
}