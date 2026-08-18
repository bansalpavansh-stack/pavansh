#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j;

    cout << "Enter 2x2 Matrix:\n";

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";

    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }
}
