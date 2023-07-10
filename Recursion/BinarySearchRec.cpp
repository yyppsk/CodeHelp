#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int bs(vector<int> &v, int start, int end, int key)
{
    // Base case
    if (start > end)
        return -1;
    int mid = (start + end) / 2;
    if (v[mid] == key)
        return mid;
    // call stuff if on left
    if (v[mid] > key)
    {
        return bs(v, start, mid - 1, key);
    }
    else
    {
        return bs(v, mid + 1, end, key);
    }
}
int main()
{
    vector<int> v{10, 20, 30, 40, 60, 80, 10};
    int n = v.size();
    cout << bs(v, 0, n, 801);
    return 0;
}