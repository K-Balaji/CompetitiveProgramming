#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		int x, y;
		cin >> x >> y;
		int ans = 0;
		if (abs(x - y) <= 1) {
			cout << x + y << "\n";
		} else {
			ans = abs(x - y) - 1;
			cout << x + y + ans << "\n";
		}
	}
}
