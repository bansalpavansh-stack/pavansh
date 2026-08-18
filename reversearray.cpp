#include <iostream>
using namespace std;

int main()
{
    int a[100], n, i;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Reverse Array: ";

    for (i = n - 1; i >= 0; i--)
        cout << a[i] << " ";
}
