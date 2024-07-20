/* OM VIGHGNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    int m = n * (n - 1) / 2, b[m];
    for (int &x : b) cin >> x;
    sort(b, b + m);
    for (int i = 0; i < m; i += --n) {
      cout << b[i] << " ";
    }
    cout << 1000000000 << "\n";
  }
}