/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define double long double

bool canCompleteTask(int x, int y, int t, int n) {
  int copiesByX = t / x;
  int copiesByY = t / y;

  return copiesByX + copiesByY >= n;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, x, y;
  cin >> n >> x >> y;
  n -= 1;
  int l = 0;
  int r = min(x, y) * n;
  while (l + 1 < r) {
    int mid = (l + r) / 2;
    if (canCompleteTask(x, y, mid, n))
      r = mid;
    else
      l = mid;
  }
  cout << r + min(x, y) << endl;
}