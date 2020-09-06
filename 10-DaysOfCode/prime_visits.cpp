#include <iostream>
#include <limits>
#include <ios>
using namespace std;

#define ll long long
#define MAX 1000000
// Prime Sieve
void prime_sieve(int *p)
{
    // Mark all odd number's prime
    for (ll i = 3; i <= MAX; i += 2)
    {
        p[i] = 1;
    }

    // Sieve
    for (ll i = 3; i <= MAX; i += 2)
    {
        // if current no. is not markerd (it is prime)
        if (p[i] == 1)
        {
            // Mark all multiples of i as not prime
            for (ll j = i * i; j <= MAX; j += i)
            {
                p[j] = 0;
            }
        }
    }

    // Special Cases
    p[2] = 1;
    p[1] = p[0] = 0;
}

int main()
{
    int p[1000005] = {0};
    // Precompute primes
    prime_sieve(p);

    int prefix_sum[1000005] = {0};
    // Precompute primes till index i
    for (int i = 1; i <= 1000000; i++)
        prefix_sum[i] = prefix_sum[i - 1] + p[i];

    // Queries
    int q;
    cin >> q;
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << prefix_sum[b] - prefix_sum[a - 1] << endl;
    }

    return 0;
}
