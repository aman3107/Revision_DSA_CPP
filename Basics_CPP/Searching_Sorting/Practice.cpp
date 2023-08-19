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
        else if (arr[right] < target)
        {
            return right;
        }
        else
        {
            left = mid + 1;
            if (arr[mid] + 1 == target || arr[mid] - 1 == target)
            {
                closest = mid;
            }
        }
        mid = (right + left) / 2;
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

void insertionSort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int pac = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > pac)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = pac;
    }
}

void merge2SortedArrays(int arr1[], int size1, int arr2[], int size2, int arr3[])
{
    int i = 0;
    int j = 0;
    int c = 0;

    while (i < size1 || j < size2)
    {
        if (arr1[i] < arr2[j] && i < size1)
        {
            arr3[c] = arr1[i];
            i++;
            c++;
        }
        else if (arr2[j] < arr1[i] && j < size2)
        {
            arr3[c] = arr2[j];
            j++;
            c++;
        }
        else
        {
            if (i < size1)
            {
                arr3[c] = arr1[i];
                i++;
                c++;
            }
            else
            {
                arr3[c] = arr2[j];
                j++;
                c++;
            }
        }
    }
}

long long int floorSqrt(long long int N)
{
    // Write your code here.
    long long int squareRoot = 0;
    while (squareRoot * squareRoot < N)
    {
        squareRoot += 1;
    }
    if (squareRoot * squareRoot != N)
    {
        --squareRoot;
    }
    return squareRoot;
}

void sort012(int arr[], int n)
{
    int i = 0;
    int j = 0;
    int k = n - 1;
    while (j <= k)
    {
        if (arr[j] == 0)
        {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j++;
        }
        else if (arr[j] == 2)
        {
            int temp = arr[k];
            arr[k] = arr[j];
            arr[j] = temp;
            k--;
        }
        else
        {
            j++;
        }
    }
}

int main()
{
    // int n;
    // cin >> n;
    // int arr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // int target;
    // cin >> target;
    // cout << binary_search(arr, n, target);
    // cout << binarySearchClosest(arr, 0, n - 1, target);
    // cout << kthSmallest(arr, n, target);
    // insertionSort(arr, n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // int size1;
    // int size2;
    // cout << "Enter size1 and size2 :" << endl;
    // cin >> size1 >> size2;

    // int arr1[size1];
    // int arr2[size2];
    // cout << "Enter elements in array 1 :" << endl;
    // for (int i = 0; i < size1; i++)
    // {
    //     cin >> arr1[i];
    // }

    // sort012(arr1, size1);
    // cout << "Enter elements in array 2 :" << endl;
    // for (int i = 0; i < size2; i++)
    // {
    //     cin >> arr2[i];
    // }
    // int size3 = size1 + size2;
    // int arr3[size3];
    // // merge2SortedArrays(arr1, size1, arr2, size2, arr3);
    // for (int i = 0; i < size1; i++)
    // {
    //     cout << arr1[i] << " ";
    // }

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}