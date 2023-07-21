#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void merge(int *arr, int s, int e)
{
}
void mergeSort(int *arr, int s, int e)
{
    if (s >= e)
    {
        return;
    }
    int mid = (s + e) / 2;
    mergeSort(arr, s, mid);
    mergeSort(arr, mid + 1, e);
    merge(arr, s, e);
}
int main()
{
    int arr[] = {9, 5, 2, 5, 7, 2, 1, 0, 8, 19};
    mergeSort(arr, 0, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}