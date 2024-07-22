/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

#define int long long

using namespace std;

signed main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, k;
    cin >> n >> k;
    int need = (k - 1) / (n - 1);
    cout << k + need << '\n';
  }
}