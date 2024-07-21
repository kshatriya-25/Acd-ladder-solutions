/* OM VIGHNHARTAYE NAMO NAMAH : */

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define all(v) v.begin(), v.end()
signed main() {
  ios_base ::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(NULL);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int &x : a) cin >> x;
    sort(all(a));
    if (a[0] != a[1])
      cout << "YES\n";
    else {
      bool pass = 0;
      for (int i = 1; i < n; i++) {
        if (a[i] % a[0] != 0) {
          pass = 1;
          break;
        }
      }
      if (pass)
        cout << "YES\n";
      else
        cout << "NO\n";
    }
  }
}