#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int solve(const vector<int> &arr, int target)
{
    if (target == 0)
        return 0;
    if (target < 0)
        return INT_MAX;
    int mini = INT_MAX;
    for (int i = 0; i < arr.size(); i++)
    {
        int ans = solve(arr, target - arr[i]);
        if (ans != INT_MAX)
            mini = min(mini, ans + 1);
    }
    return mini;
}
int main()
{
    vector<int> arr = {3, 5};
    cout << solve(arr, 8);
    return 0;
}