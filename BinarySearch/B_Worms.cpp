/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n;
  cin >> n;
  vector<int> pile(n);
  vector<int> prefix(n);

  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    pile[i] = x;
    prefix[i + 1] = prefix[i] + x;
  }
  int m;
  cin >> m;
  while (m-- > 0) {
    int q;
    cin >> q;
    int ind = lower_bound(prefix.begin(), prefix.end(), q) - prefix.begin();
    cout << ind << endl;
  }
}