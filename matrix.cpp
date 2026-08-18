#include <iostream>
using namespace std;

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i, j, k;

    cout << "Enter Matrix A (2x2):\n";
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> a[i][j];

    cout << "Enter Matrix B (2x2):\n";
    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
            cin >> b[i][j];

    for (i = 0; i < 2; i++)
        for (j = 0; j < 2; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < 2; k++)
                c[i][j] += a[i][k] * b[k][j];
        }

    cout << "Result:\n";
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}
