#include<iostream>
using namespace std;
#define ll long long int
int gcd(ll a, ll b) {
	return b==0? a : gcd(b, a%b);
}

int main() {
	ll a, b;
	cin >> a >> b;
	cout << gcd(a, b);
	return 0;
}
