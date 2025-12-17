#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	
	sort(a.begin(), a.end());
	int res = 0;
	for (int i = 0; i < n; i += 2) {
		res += a[i + 1] - a[i];
	}
	
	cout << res << endl;
	
	return 0;
}