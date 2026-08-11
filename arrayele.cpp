#include <iostream>
using namespace std;

int main()
{
    int a[100], n = 0, choice, i, pos, item, key;

    while (1)
    {
        cout << "\n1.Create";
        cout << "\n2.Display";
        cout << "\n3.Insert";
        cout << "\n4.Delete";
        cout << "\n5.Linear Search";
        cout << "\n6.Exit";
        cout << "\nEnter Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter size: ";
            cin >> n;
            cout << "Enter elements:\n";
            for (i = 0; i < n; i++)
                cin >> a[i];
            break;

        case 2:
            cout << "Array: ";
            for (i = 0; i < n; i++)
                cout << a[i] << " ";
            break;

        case 3:
            cout << "Enter position: ";
            cin >> pos;
            cout << "Enter element: ";
            cin >> item;

            for (i = n; i >= pos; i--)
                a[i] = a[i - 1];

            a[pos - 1] = item;
            n++;
            break;

        case 4:
            cout << "Enter position: ";
            cin >> pos;

            for (i = pos - 1; i < n - 1; i++)
                a[i] = a[i + 1];

            n--;
            break;

        case 5:
            cout << "Enter element: ";
            cin >> key;

            for (i = 0; i < n; i++)
            {
                if (a[i] == key)
                {
                    cout << "Found at position " << i + 1;
                    break;
                }
            }
            if (i == n)
                cout << "Not Found";
            break;

        case 6:
            return 0;
        }
    }
}
