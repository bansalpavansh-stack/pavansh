#include <iostream>
using namespace std;

int main()
{
    int a[20][3], b[20][3], c[50][3];
    int r1, c1, n1;
    int r2, c2, n2;

    cout << "Enter rows, columns and non-zero elements of Matrix A: ";
    cin >> r1 >> c1 >> n1;

    a[0][0] = r1;
    a[0][1] = c1;
    a[0][2] = n1;

    cout << "Enter triplet elements of Matrix A:\n";

    for(int i = 1; i <= n1; i++)
    {
        cin >> a[i][0] >> a[i][1] >> a[i][2];
    }

    cout << "\nEnter rows, columns and non-zero elements of Matrix B: ";
    cin >> r2 >> c2 >> n2;

    b[0][0] = r2;
    b[0][1] = c2;
    b[0][2] = n2;

    cout << "Enter triplet elements of Matrix B:\n";

    for(int i = 1; i <= n2; i++)
    {
        cin >> b[i][0] >> b[i][1] >> b[i][2];
    }

    if(c1 != r2)
    {
        cout << "Multiplication is not possible.";
        return 0;
    }

    int result[20][20] = {0};

    // Multiply sparse matrices
    for(int i = 1; i <= n1; i++)
    {
        for(int j = 1; j <= n2; j++)
        {
            if(a[i][1] == b[j][0])
            {
                int row = a[i][0];
                int col = b[j][1];

                result[row][col] +=
                    a[i][2] * b[j][2];
            }
        }
    }

    // Convert result into triplet
    int k = 1;

    c[0][0] = r1;
    c[0][1] = c2;

    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
        {
            if(result[i][j] != 0)
            {
                c[k][0] = i;
                c[k][1] = j;
                c[k][2] = result[i][j];
                k++;
            }
        }
    }

    c[0][2] = k - 1;

    cout << "\nMultiplication in Triplet Form:\n";

    for(int i = 0; i < k; i++)
    {
        cout << c[i][0] << " "
             << c[i][1] << " "
             << c[i][2] << endl;
    }

    return 0;
}
