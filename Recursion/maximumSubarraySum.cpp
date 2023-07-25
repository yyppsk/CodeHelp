#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int findsum(vector<int> &nums, int start, int size)
{
    if (start > size)
        return 0;
    for (int i = start; i < size; i++)
        cout << nums[i] << " ";
    cout << endl;
    findsum(nums, start + 1, size);
}
int maxSubArray(vector<int> &nums)
{
    findsum(nums, 0, nums.size());
    return 0;
}
int main()
{
    vector<int> arr = {-1, 2, 5, -2, 10};
    maxSubArray(arr);
    return 0;
}