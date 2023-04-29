#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void Bubble(vector<int> &arr)
{
    for (int round = 1; round < arr.size(); round++)
    {
        bool swapped = false;
        for (int j = 0; j <= arr.size() - round - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swapped = true;
                swap(arr[j], arr[j + 1]);
            }
        }
        if (!swapped)
            break;
    }
}
int main()
{
    vector<int> arr = {5, 4, 2, 1, 7, 6, 5, 1, 32, 5, 4, 78, 22};
    Bubble(arr);
    for (auto i : arr)
    {
        cout << i << " ";
    }
    return 0;
}