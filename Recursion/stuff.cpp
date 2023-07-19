#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int arraySign(vector<int> &nums)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int c = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
            return 0;
    }
    long prod = 1;
    for (auto v : nums)
    {
        if (v < 0)
            c += 1;
    }
    if (c % 2 == 0)
        return 1;
    else
        return -1;
}
int main()
{
    vector<int> nums = {-1, -2, -3, -4, 3, 2, 1};
    cout << arraySign(nums);
    return 0;
}