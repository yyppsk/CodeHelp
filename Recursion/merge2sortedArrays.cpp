#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void merge(int *arr1, int *arr2, int s1, int s2)
{

    //  Logic for the merger of 2 sorted arrays
    int sorted[s1 + s2 + 1] = {0};
    int leftIndex = 0, rightIndex = 0, mainArrayIndex = 0;
    while (leftIndex < s1 && rightIndex < s2)
    {
        if (arr1[leftIndex] < arr2[rightIndex])
        {
            sorted[mainArrayIndex++] = arr1[leftIndex++];
        }
        else
        {
            sorted[mainArrayIndex++] = arr2[rightIndex++];
        }
    }
    // copy logic
    while (leftIndex < s1)
    {
        /* code */
        sorted[mainArrayIndex++] = arr1[leftIndex++];
    }
    while (rightIndex < s2)
    {
        /* code */
        sorted[mainArrayIndex++] = arr2[rightIndex++];
    }
    for (int i = 0; i < s1 + s2; i++)
    {
        cout << sorted[i] << " ";
    }
}
int main()
{
    int arr1[] = {1, 3, 6, 9};
    int arr2[] = {2, 4, 5, 7, 8};
    int s1 = 4, s2 = 5;
    merge(arr1, arr2, s1, s2);

    return 0;
}