#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
void solve()
{
}
int main()
{
    int a = 10;
    int *ptr = &a;
    cout << "Value of a " << a << endl;
    cout << "Address of a " << &a << endl;
    cout << "Value of ptr " << ptr << endl;
    cout << "Address of ptr " << &ptr << endl;
    cout << "Value of a being pointed by ptr " << *ptr << endl;

    int *q = ptr;
    cout << "Value of q " << q << endl;
    cout << "Address of q " << &q << endl;
    cout << "Value of a being pointed by q " << *q << endl;

    int arr[] = {12, 14, 16, 18};
    cout << "Address of arr " << arr << endl;
    cout << *arr << endl;
    cout << *(arr) + 1 << endl;
    cout << *(arr + 1) << endl;
    cout << *(arr + 2) << endl;

    char name[10] = "sherBano";
    cout << name << endl;
    char *chptr = &name[0];
    cout << *(name + 3) << endl;
    cout << chptr << endl;
    cout << *(chptr + 3) << endl;
    cout << chptr + 3 << endl;
    cout << *chptr << endl;

    char k = 'k';
    char *cptr = &k;
    cout << cptr << endl; // a lot of garbage stuff
    return 0;
}