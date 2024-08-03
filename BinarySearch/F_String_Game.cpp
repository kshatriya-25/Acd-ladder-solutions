/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool isOrderPreserved(string t, string p, vector<int> indices, int k) {
  unordered_set<int> deleteindexes(indices.begin(), indices.begin() + k);
  string filtered;
  for (int i = 0; i < t.size(); i++) {
    if (deleteindexes.find(i + 1) == deleteindexes.end()) filtered += t[i];
  }
  int tar = 0;
  for (char ch : filtered) {
    if (ch == p[tar]) tar++;
    if (tar == p.size()) return true;
  }
  return false;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  string t, p;
  cin >> t >> p;
  int n = t.size();
  vector<int> indices(n);
  for (int &x : indices) cin >> x;
  int l = 0, r = t.size();
  while (l + 1 < r) {
    int mid = (l + r) >> 1;
    if (isOrderPreserved(t, p, indices, mid))
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
}