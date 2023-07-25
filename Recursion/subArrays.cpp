#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(vector<int> &arr, int start, int end)
{

    if (end == arr.size() && start == end)
        return;
    if (end == arr.size())
    {
        start++;
        end = 0;
    }
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    solve(arr, start, end + 1);
}
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    solve(arr, 0, 0);
    return 0;
}