#include <iostream>
using namespace std;

int binary_search(int arr[], int n, int target)
{
    int right = 0;
    int left = n - 1;
    int mid = (right + left) / 2;
    while (right <= left)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            left = mid - 1;
        }
        else
        {
            right = mid + 1;
        }
        mid = (right + left) / 2;
    }
    return -1;
}

int binarySearchClosest(int arr[], int left, int right, int target)
{
    // Write your code here
    int closest = 0;
    int mid = (left + right) / 2;
    while (left <= right)
    {
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
            if (arr[mid] + 1 == target || arr[mid] - 1 == target)
            {
                closest = mid;
            }
        }
        else
        {
            left = mid + 1;
            if (arr[mid] + 1 == target || arr[mid] - 1 == target)
            {
                closest = mid;
            }
        }
        mid = (right + mid) / 2;
    }
    return closest;
}
int kthSmallest(int arr[], int n, int k)
{
    // Write your code here
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr[k - 1];
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int target;
    cin >> target;
    // cout << binary_search(arr, n, target);
    // cout << binarySearchClosest(arr, 0, n - 1, target);
    cout << kthSmallest(arr, n, target);
}