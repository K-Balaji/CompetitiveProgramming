#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int n;
		cin >> n;
		n *= 2;
		int a[200000];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n);
		cout << a[n/2] - a[n/2 - 1] << "\n";
	}
}