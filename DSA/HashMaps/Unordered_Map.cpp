#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

int main()
{
  unordered_map<string, int> ourMap;
  pair<string, int> p("abc", 1);

  // insert
  ourMap.insert(p);
  ourMap["def"] = 2;

  // access or find
  cout << ourMap["abc"] << endl;
  cout << ourMap.at("def") << endl;
  // cout << ourMap.at("ghi") << endl;
  cout << "size :" << ourMap.size() << endl;
  cout << ourMap["ghi"] << endl;
  cout << "size :" << ourMap.size() << endl;

  // check presence
  if (ourMap.count("ghi") > 0)
  {
    cout << "ghi is present" << endl;
  }

  // erase
  ourMap.erase("ghi");
  cout << "size :" << ourMap.size() << endl;

  if (ourMap.count("ghi") > 0)
  {
    cout << "ghi is present" << endl;
  }
}