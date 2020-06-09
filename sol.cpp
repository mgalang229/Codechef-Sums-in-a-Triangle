#include <bits/stdc++.h>

using namespace std;

int a[100][100];

int btop(int x) {
	if(x == 1) {
		return a[0][0];
	}
	for(int i = x - 2; i >= 0; --i) {
		for(int j = 0; j <= i; ++j) {
			a[i][j] += max(a[i+1][j], a[i+1][j+1]);
		}
	}
	return a[0][0];
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t, n = 0;
	cin >> t;
	while(t--) {
		cin >> n;
		for(int i = 0; i < n; ++i) {
			for(int j = 0; j <= i; ++j) {
				cin >> a[i][j];
			}
		}
		cout << btop(n) << "\n";
	}
	return 0;
}
