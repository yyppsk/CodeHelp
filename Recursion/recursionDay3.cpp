#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
bool checkSorted(vector<int> &v, int &n, int i)
{
    // Base case
    if (i == n - 1)
    {
        return true;
    }
    // One case to be solved
    if (v[i + 1] < v[i])
        return false;
    return checkSorted(v, n, i + 1);
}
int main()
{
    vector<int> v{10, 20, 30, 40, 60, 80, 10};
    int n = v.size();
    cout << checkSorted(v, n, 0);
    return 0;
}