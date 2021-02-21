#include <bits/stdc++.h>
#define int long long
#define pb push_back
using namespace std;

signed main() {

	int n; cin >> n;
	set<int> s;
	for (int i = 0; i < n; i++) {
		int x; cin >> x;
		s.insert(x);
	}

	if (s.size() < 2) {
		cout << "NO";
	} else {
		auto it = s.begin();
		it++;
		cout << *it;
	}



}
