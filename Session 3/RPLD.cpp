#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

void solve(int t) {

	int n, r; cin >> n >> r;

	map<int, set<int>> mp;

	for (int i = 0; i < r; i++) {
		int student, subject;
		cin >> student >> subject;
		mp[student].insert(subject);
	}
	int count = 0;
	for (auto p : mp) {
		count += p.second.size();
	}

	cout << "Scenario #" << t << ": ";

	if (count == r) {
		cout << "possible" << endl;
	} else {
		cout << "impossible" << endl;
	}
}

signed main() {

	int t; cin >> t;
	for (int i = 1; i <= t; i++) {
		solve(i);
	}

}
