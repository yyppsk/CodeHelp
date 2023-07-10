#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void printSub(string &str, string output, int i)
{
    if (i >= str.length())
    {
        cout << output << endl;
        return;
    }
    // exclude
    printSub(str, output, i + 1);

    // include
    output.push_back(str[i]);
    printSub(str, output, i + 1);
}
int main()
{
    string str = "ABC";
    string output = "";
    printSub(str, output, 0);
    return 0;
}