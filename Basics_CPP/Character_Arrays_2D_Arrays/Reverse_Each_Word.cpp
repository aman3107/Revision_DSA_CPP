#include <iostream>
using namespace std;

void reverseChar(char str[], int i, int j)
{
    while (i < j)
    {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void reverseWord(char str[])
{
    int previousIndex = -1;
    int i = 0;
    for (; str[i] != '\0'; i++)
    {
        if (str[i] == ' ')
        {
            reverseChar(str, previousIndex + 1, i - 1);
            previousIndex = i;
        }
    }
     reverseChar(str, previousIndex + 1, i - 1);
    cout << str << endl;
}

int main()
{
    char str[100];
    cout << "Enter string :" << endl;
    cin.getline(str, 100);

    reverseWord(str);
}