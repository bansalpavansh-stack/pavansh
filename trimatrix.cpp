#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter size of matrix: ";
    cin >> n;

    int a[3][n];

    cout << "Enter elements of tri-diagonal matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i - j == 1)
                cin >> a[0][j];       
            else if(i == j)
                cin >> a[1][j];       
            else if(j - i == 1)
                cin >> a[2][j];       
        }
    }

    cout << "Tri-diagonal Matrix:\n";

    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(i - j == 1)
                cout << a[0][j] << " ";
            else if(i == j)
                cout << a[1][j] << " ";
            else if(j - i == 1)
                cout << a[2][j] << " ";
            else
                cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
