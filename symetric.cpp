#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter lower triangular elements:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cin >> a[i][j];

            if(i != j)
                a[j][i] = a[i][j];
        }
    }

    cout << "\nSymmetric Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
