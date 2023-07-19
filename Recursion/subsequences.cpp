#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve(int i, string mainstring, string &finalString)
{
    if (i == mainstring.length())
    {
        cout << finalString << " ";
        return;
    }
    finalString.push_back(mainstring[i]);
    solve(i + 1, mainstring, finalString);

    finalString.pop_back();
    solve(i + 1, mainstring, finalString);
}
int main()
{
    string s = "abc";
    string finalString = "";
    cout << "All possible subsequences are: " << endl;
    solve(0, s, finalString);
    return 0;
}