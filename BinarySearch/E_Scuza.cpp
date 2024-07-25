/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, q;
    cin >> n >> q;
    vector<int> prefix(n);
    vector<int> prefmax(n);
    prefix.push_back(0);
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      prefix.push_back(prefix.back() + x);
      if (i == 0) {
        prefmax.push_back(x);
      } else {
        prefmax.push_back(max(prefmax.back(), x));
      }
    }
    for (int i = 0; i < q; i++) {
      int k;
      cin >> k;
      int m = upper_bound(prefmax.begin(), prefmax.end(), k) - prefmax.begin();
      cout << prefix[m] << " ";
    }
    cout << endl;
  }
}