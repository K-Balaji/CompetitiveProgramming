#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--) {
		string a;
		cin >> a;
		while(a.back() == '0') {
			a.pop_back();
		}
		reverse(a.begin(), a.end());
		cout << a << "\n";
	}
}
