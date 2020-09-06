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

ll countTrailingZeros(ll n)
{
    ll count = 0;
    for (int i = 5; n / i >= 1; i *= 5)
    {
        count += n / i;
    }
    return count;
}
int main()
{
    ll n;
    cin >> n;
    ll count = countTrailingZeros(n);
    cout << count << endl;
    return 0;
}