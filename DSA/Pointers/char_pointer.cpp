#include <iostream>
using namespace std;

int main(){
    int arr[] = {1,2,3};
    char str[] = "abc";
    cout << arr << endl;
    cout << str << endl;

    char * c = &str[0];
    cout << c << endl;  

    char c1 = 'a';
    char *pc = &c1;
    c1++;
    cout << c1 << endl;
    cout << pc << endl;

    char str1[] = "abcde";
    char *pstr1 = "abcde";
}