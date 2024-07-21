/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> a;
    unordered_map<int, int> map;
    int res = 0;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      x -= i;
      res += map[x];
      map[x]++;
    }
    cout << res << "\n";
  }
}