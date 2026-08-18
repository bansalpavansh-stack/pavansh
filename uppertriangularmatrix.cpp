#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int a[n][n];

    cout << "Enter upper triangular matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = i; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    cout << "\nUpper Triangular Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i <= j)
                cout << a[i][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
