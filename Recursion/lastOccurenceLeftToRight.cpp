#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(string &s, int x, int i, int &ans)
{
    if (i >= s.size())
        return;
    if (s[i] == x)
        ans = i;
    solve(s, x, i + 1, ans);
}
int main()
{
    string s = "abcddedg";
    char x = 'g';
    int ans = -1;
    solve(s, x, 0, ans);
    cout << ans;
    return 0;
}