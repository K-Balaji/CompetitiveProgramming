#include<bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n;
	cin >> n;
	vector<int> a;
	for(int i = 0, b; i < n; ++i) {
		cin >> b;
		a.push_back(b);
	}
	for(int i = 0; i < n; ++i) {
		for(int j = i + 1; j < n; ++j) {
			if (a[i] > a[j]) {
				swap(a[i], a[j]);
			}
		}
	}
	for(int i =0; i < n; ++i) {
		cout << a[i] << " \n"[i == n - 1];
	}
}
