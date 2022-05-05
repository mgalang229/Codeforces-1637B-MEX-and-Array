#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> a(n);
		for (int i = 0; i < n; i++) {
			cin >> a[i];
		}
		long long ans = 0;
		for (int i = 0; i < n; i++) {
			for (int j = i; j < n; j++) {
				ans += (j - i + 1);
				for (int k = i; k <= j; k++) {
					if (a[k] == 0) {
						ans++;
					}
				}
			}
		}
		cout << ans << '\n';
	}
	return 0;
}
