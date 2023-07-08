#include <iostream>
using namespace std;

void swapChar(char str[], int start, int end)
{
    while (start < end)
    {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

void reverseWordWise(char str[])
{
    int i = 0;
    int previousIndex = -1;
    for (; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            swapChar(str,previousIndex+1,i-1);
            previousIndex = i;
        }
    }
    swapChar(str,previousIndex+1,i-1);
    swapChar(str,0,i-1);
}

int main()
{
    char str[10000];
    cout << "Enter string " << endl;
    cin.getline(str, 10000);
    reverseWordWise(str);
    cout << str << endl;
}