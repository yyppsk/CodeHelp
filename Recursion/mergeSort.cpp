#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void merge(int *arr, vector<int> &temp, int s, int mid, int e)
{
    int leftIndex = s, rightIndex = mid + 1, mainArrayIndex = s;
    while (leftIndex <= mid && rightIndex <= e)
    {
        if (arr[leftIndex] <= arr[rightIndex])
        {
            temp[mainArrayIndex++] = arr[leftIndex++];
        }
        else
        {
            temp[mainArrayIndex++] = arr[rightIndex++];
        }
    }
    while (leftIndex <= mid)
    {
        temp[mainArrayIndex++] = arr[leftIndex++];
    }
    while (rightIndex <= e)
    {
        temp[mainArrayIndex++] = arr[rightIndex++];
    }
    while (s <= e)
    {
        arr[s] = temp[s];
        s++;
    }
}
void mergeSort(int *arr, vector<int> &temp, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, temp, s, mid);
    mergeSort(arr, temp, mid + 1, e);
    merge(arr, temp, s, mid, e);
}
int main()
{
    int arr[] = {9, 5, 2, 5, 7, 2, 1, 0, 8, 19};
    vector<int> temp(10, 0);
    mergeSort(arr, temp, 0, 10);

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}