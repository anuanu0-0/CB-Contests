#include <bits/stdc++.h>
#include <unordered_map>
#include <unordered_set>

using namespace std;

#define test  \
    int t;    \
    cin >> t; \
    while (t--)

#define f(i, c, n) for (int i = c; i < n; i++)
#define ii int, int

#define ll long long int
#define vi vector<int>
#define vvi vector<vector<int>>
#define P pair
#define US unordered_set
#define UM unordered_map
#define S set
#define M map
#define fi first
#define sc second
#define pb push_back
#define endl '\n'

#define Fast                           \
    ios_base::sync_with_studio(false); \
    cin.tie();                         \
    cout.tie();

int main()
{
    int n, m, k, s;
    cin >> n >> m >> k >> s;
    char park[n][m];
    bool lost = false;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> park[i][j];

    for (int i = 0; i < n; i++)
    {
        if (s < k)
        {
            lost = true;
            break;
        }
        for (int j = 0; j < m; j++)
        {
            if (s < k)
            {
                lost = true;
                break;
            }
            if (park[i][j] == '.')
            {
                s -= 2;
            }

            else if (park[i][j] == '*')
            {
                s += 5;
            }

            else
            {
                break;
            }
            if (j != m - 1)
                s -= 1;
        }
        cout << endl;
    }

    if (!lost)
        cout << "Yes" << endl
             << s;
    else
        cout << "No" << endl;

    return 0;
}