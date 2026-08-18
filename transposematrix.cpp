#include <iostream>
using namespace std;

int main()
{
    int a[20][3], t[20][3];
    int rows, cols, n;

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> rows >> cols >> n;

    a[0][0] = rows;
    a[0][1] = cols;
    a[0][2] = n;

    cout << "Enter row, column and value of non-zero elements:\n";

    for(int i = 1; i <= n; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    // Transpose
    t[0][0] = cols;
    t[0][1] = rows;
    t[0][2] = n;

    int k = 1;

    for(int j = 0; j < cols; j++)
    {
        for(int i = 1; i <= n; i++)
        {
            if(a[i][1] == j)
            {
                t[k][0] = a[i][1];
                t[k][1] = a[i][0];
                t[k][2] = a[i][2];
                k++;
            }
        }
    }

    cout << "\nTranspose in Triplet Form:\n";

    for(int i = 0; i <= n; i++)
    {
        cout << t[i][0] << " "
             << t[i][1] << " "
             << t[i][2] << endl;
    }

    return 0;
}
