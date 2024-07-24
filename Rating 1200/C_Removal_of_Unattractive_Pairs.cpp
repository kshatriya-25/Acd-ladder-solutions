/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n;
    cin >> n;
    string s;
    cin >> s;
    unordered_map<char, int> map;
    for (auto c : s) {
      map[c]++;
    }
    int m = -1;
    for (const auto &i : map) {
      m = max(m, i.second);
    }
    cout << max(n % 2, 2 * m - n) << "\n";
  }
}