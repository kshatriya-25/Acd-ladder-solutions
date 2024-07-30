/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool canfit(int a, int b, int n, int x) { return (x / a) * (x / b) >= n; }

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int w, h, n;
  cin >> w >> h >> n;
  int l = 0;
  int r = 1;
  while (!canfit(w, h, n, r)) r *= 2;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    if (canfit(w, h, n, mid))
      r = mid;
    else
      l = mid;
  }
  cout << r << endl;
}