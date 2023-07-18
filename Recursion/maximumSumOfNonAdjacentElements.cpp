#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(vector<int> &arr, int i, int sum, int &maxi)
{
    // Base case will be i because it must not go outside the bounds of i
    if (i > arr.size())
    {
        maxi = max(sum, maxi);
        return;
    }

    // include wali call

    solve(arr, i + 2, sum + arr[i], maxi);
    // exclude wali call
    solve(arr, i + 1, sum, maxi);
}
int main()
{
    vector<int> arr{1, 2, 3, 1, 3, 5, 8, 1, 9};
    int sum = 0, maxi = INT_MIN, i = 0;
    solve(arr, i, sum, maxi);
    cout << maxi;
    return 0;
}