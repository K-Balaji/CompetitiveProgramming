#include<bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
	string a;
	cin >> a;
	string d;
	int b = a.size()/2;
	if (a.size() % 2 == 0)
		--b;
	int c = b+ 1;
	int i = 1;
	while(b >= 0 || c < a.size()) {
		if (i  % 2 == 1) {
			d += a[b];
			--b;
		} else {
			d += a[c];
			++c;
		}
		++i;
	}
	cout << d << "\n";
}
