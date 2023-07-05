#include <iostream>
#include <deque>
using namespace std;

int *sliceArray(int *start, int *end)
{
    // Calculate length of the new array
    int length = end - start;

    // Create new dynamic array
    int *newArr = new int[length];

    // Copy elements from the original array
    int j = 0;
    for (int *ptr = start; ptr < end; ptr++, j++)
    {
        newArr[j] = *ptr;
    }

    return newArr;
}

template <typename T>
T findMax(T arr[], int n)
{
    T max = arr[0]; // Assume first element is maximum initially
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

void printKMax(int arr[], int n, int k)
{
    // Write your code here.
    for (int i = 0; i < n - k + 1; i++)
    {
        int *start = arr + i;
        int *end = arr + i + k;

        // Get the contiguous subarray
        int *subArray = sliceArray(start, end);

        // get the maximum from this subarray
        auto maxFromSubArray = findMax(subArray, k);

        std::cout << maxFromSubArray << " ";

        // Delete the array
        delete[] subArray;
    }
    std::cout << std::endl;
}

int main()
{

    int t;
    cin >> t;
    while (t > 0)
    {
        int n, k;
        cin >> n >> k;
        int i;
        int arr[n];
        for (i = 0; i < n; i++)
            cin >> arr[i];
        printKMax(arr, n, k);
        t--;
    }
    return 0;
}