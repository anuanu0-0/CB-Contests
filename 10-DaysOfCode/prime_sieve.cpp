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
	int n;
	cin >> n;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	int p[1000005] = {0};
	prime_sieve(p);

	// Prints prime upto range n
	for (int i = 0; i <= n; i++)
	{
		if (p[i] == 1)
			cout << i << " ";
	}
	return 0;
}
