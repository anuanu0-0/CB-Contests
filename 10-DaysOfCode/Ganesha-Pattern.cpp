#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // First horizontal line
    int j = 0;
    while (j < n)
    {
        if (j == 0)
            cout << "*";
        else if (j <= n / 2 - 1)
            cout << " ";
        else
        {
            cout << "*";
        }

        j++;
    }
    cout << endl;

    //  Vertical Upper pairs
    int s = n / 2 - 1;
    while (s--)
    {
        j = 1;
        while (j <= n / 2 + 1)
        {
            if (j == 1 || j == n / 2 + 1)
                cout << "*";
            else
                cout << " ";
            j++;
        }
        cout << endl;
    }

    //  Horizontal middle bar
    for (int i = 0; i < n; i++)
        cout << "*";
    cout << endl;
    //  Vertical lower lines
    s = n / 2 - 1;
    while (s--)
    {
        for (int i = 0; i < n; i++)
        {
            if (i == n / 2 || i == n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    //  Last horizontal line
    for (int l = 0; l < n; l++)
    {
        if (l <= n / 2 || l == n - 1)
            cout << "*";
        else
            cout << " ";
    }
    // End of line

    return 0;
}