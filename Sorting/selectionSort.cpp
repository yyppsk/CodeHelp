#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void ssort(vector<int> &arr)
{
    for (int i = 0; i < arr.size() - 1; i++)
    {
        int minm = i;

        for (int j = i + 1; j < arr.size(); j++)
        {
            if (arr[minm] > arr[j])
                minm = j;
        }
        swap(arr[i], arr[minm]);
    }
}
int main()
{
    vector<int> arr = {5, 4, 2, 1, 7, 6, 5, 1, 32, 5, 4, 78, 22};
    ssort(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}