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
		int a[100000];
		for(int i = 0; i < n; ++i) {
			cin >> a[i];
		}
		sort(a, a+n);
		cout << min(a[n - 2] - 1, n - 2) << "\n";
	}
}
