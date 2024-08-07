/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

int isPsblElement(vector<pair<int, int>> &pairs, int n, int k, int x) {
  int noOfElementsLessThanX = 0;
  for (int i = 0; i < n; i++) {
    if (pairs[i].first <= x) {
      noOfElementsLessThanX += min(pairs[i].second, x) - pairs[i].first + 1;
    }
    if (noOfElementsLessThanX > k) return true;
  }
  return false;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<pair<int, int>> pairs(n);
  for (int i = 0; i < n; i++) {
    cin >> pairs[i].first >> pairs[i].second;
  }
  int l = -1e12;
  int r = 1e12;
  while (l + 1 < r) {
    int mid = (l + r) >> 1;
    if (isPsblElement(pairs, n, k, mid))
      r = mid;
    else
      l = mid;
  }
  cout << r << endl;
}