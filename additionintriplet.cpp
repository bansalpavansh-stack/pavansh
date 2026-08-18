#include <iostream>
using namespace std;

int main()
{
    int a[20][3], b[20][3], c[40][3];
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

    if(r1 != r2 || c1 != c2)
    {
        cout << "Addition is not possible.";
        return 0;
    }

    int i = 1, j = 1, k = 1;

    c[0][0] = r1;
    c[0][1] = c1;

    while(i <= n1 && j <= n2)
    {
        if(a[i][0] == b[j][0] &&
           a[i][1] == b[j][1])
        {
            int sum = a[i][2] + b[j][2];

            if(sum != 0)
            {
                c[k][0] = a[i][0];
                c[k][1] = a[i][1];
                c[k][2] = sum;
                k++;
            }

            i++;
            j++;
        }
        else if(a[i][0] < b[j][0] ||
               (a[i][0] == b[j][0] &&
                a[i][1] < b[j][1]))
        {
            c[k][0] = a[i][0];
            c[k][1] = a[i][1];
            c[k][2] = a[i][2];

            i++;
            k++;
        }
        else
        {
            c[k][0] = b[j][0];
            c[k][1] = b[j][1];
            c[k][2] = b[j][2];

            j++;
            k++;
        }
    }

    while(i <= n1)
    {
        c[k][0] = a[i][0];
        c[k][1] = a[i][1];
        c[k][2] = a[i][2];
        i++;
        k++;
    }

    while(j <= n2)
    {
        c[k][0] = b[j][0];
        c[k][1] = b[j][1];
        c[k][2] = b[j][2];
        j++;
        k++;
    }

    c[0][2] = k - 1;

    cout << "\nAddition in Triplet Form:\n";

    for(int x = 0; x < k; x++)
    {
        cout << c[x][0] << " "
             << c[x][1] << " "
             << c[x][2] << endl;
    }

    return 0;
}
