/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0)

signed main() {
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> ct2(n + 1, 0), ct1(n + 1, 0);
    int mex1 = 0, mex2 = 0;
    for (int &x : a) {
      cin >> x;
      ct2[x]++;
    }
    while (ct2[mex2]) mex2++;
    bool flag = 1;
    for (int i = 0; i < n; i++) {
      ct1[a[i]]++;
      if (--ct2[a[i]] == 0 && mex2 > a[i]) mex2 = a[i];
      while (mex2 && !ct2[mex2 - 1]) mex2--;
      while (ct1[mex1]) mex1++;
      if (mex1 == mex2) {
        cout << "2\n";
        cout << 1 << " " << i + 1 << "\n";
        cout << i + 2 << " " << n << "\n";
        flag = 0;
        break;
      }
    }
    if (flag) cout << "-1\n";
  }
}