#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	ll n;
	cin >> n;
	if (n == 0) {
		cout << 1 << "\n";
		return 0;
	}
	n %= 4;
	if (n == 1) {
		cout << 8 << "\n";
	} else if (n == 2) { 
		cout << 4 << "\n";
	} else if (n == 3) {
		cout << 2 << "\n";
	} else  {
		cout << 6 << "\n";
	}
}
