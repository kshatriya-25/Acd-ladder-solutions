/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n;
  cin >> n;
  int k = n - 1;
  int p[n];
  while (k >= 0) {
    int h = ceil(sqrt(k));
    h = h * h;

    for (int i = h - k; i <= k; i++) {
      p[i] = h - i;
    }
    k = h - k - 1;
  }
  for (int i = 0; i < n; i++) cout << p[i] << " ";
  cout << endl;
}

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    jaiShreeRam();
  }
}