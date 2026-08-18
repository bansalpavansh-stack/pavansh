#include <iostream>
using namespace std;

int main()
{
    int a[10][10], i, j, row, col, sum;

    cout << "Enter rows and columns: ";
    cin >> row >> col;

    cout << "Enter elements:\n";

    for (i = 0; i < row; i++)
        for (j = 0; j < col; j++)
            cin >> a[i][j];

    cout << "\nRow Sum:\n";

    for (i = 0; i < row; i++)
    {
        sum = 0;
        for (j = 0; j < col; j++)
            sum += a[i][j];
        cout << sum << endl;
    }

    cout << "\nColumn Sum:\n";

    for (j = 0; j < col; j++)
    {
        sum = 0;
        for (i = 0; i < row; i++)
            sum += a[i][j];
        cout << sum << endl;
    }
}
