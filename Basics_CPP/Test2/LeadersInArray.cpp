#include <iostream>
#include <climits>
using namespace std;

void Leaders(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    bool leader = true;
    for (int j = i + 1; j < len; j++)
    {
      if (arr[i] < arr[j])
      {
        leader = false;
        break;
      }
    }
    if (leader)
    {
      cout << arr[i] << " ";
    }
  }
}

int main()
{
  int len;
  cin >> len;
  int arr[len];
  for (int i = 0; i < len; i++)
  {
    cin >> arr[i];
  }
  Leaders(arr, len);
}