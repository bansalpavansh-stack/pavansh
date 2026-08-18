#include <iostream>
using namespace std;

int main()
{
    int a[100], n, k, i;

    cout << "Enter size: ";
    cin >> n;

    cout << "Enter elements:\n";
    for (i = 0; i < n; i++)
        cin >> a[i];

    cout << "Enter K: ";
    cin >> k;

    cout << "Left Rotation: ";
    for (i = k; i < n; i++)
        cout << a[i] << " ";
    for (i = 0; i < k; i++)
        cout << a[i] << " ";

    cout << "\nRight Rotation: ";
    for (i = n - k; i < n; i++)
        cout << a[i] << " ";
    for (i = 0; i < n - k; i++)
        cout << a[i] << " ";
}
