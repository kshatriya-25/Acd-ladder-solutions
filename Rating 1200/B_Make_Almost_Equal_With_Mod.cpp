/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

int findk(const vector<int> &arr) {
  for (int exp = 1; exp <= 57; exp++) {
    int k = 1LL << exp;
    unordered_set<int> mods;
    for (int num : arr) {
      mods.insert(num % k);
      if (mods.size() > 2) break;
    }
    if (mods.size() == 2) return k;
  }
  return -1;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int &x : arr) cin >> x;
    cout << findk(arr) << "\n";
  }
}