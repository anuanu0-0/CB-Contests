#include<iostream>
#include<algorithm>
using namespace std;
// Without using STL
void rotate(int a[][1000], int n) {
	// Reverse each row
	for(int i=0; i<n; i++) {
		int s_col = 0;
		int e_col = n-1;
		while(s_col < e_col) {
			swap(a[i][s_col], a[i][e_col]);
			s_col++;
			e_col--;
		}
	}

	// Do the transpose
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++){
			if(i<j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}
}

// Using STL
void rotate_stl(int a[][1000], int n) {
 	for(int i=0; i<n; i++) {
		reverse(a[i], a[i]+n);
	}

	// Do the transpose
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			if(i<j) {
				swap(a[i][j], a[j][i]);
			}
		}
	}
}

// Display matrix
void display(int a[][1000], int n) {
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}

// Driver
int main() {
	int a[1000][1000];
	int n;
	cin >> n;
 	
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++) {
			cin >> a[i][j];
		}
	}
	rotate(a, n);
	display(a, n);
	// rotate_stl(a, n);
	// display(a, n);
	return 0;
}
