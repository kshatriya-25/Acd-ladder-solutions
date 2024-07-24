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
    vector<int> arr(n);
    set<int> set;
    map<int, int> cnt;
    for (int &x : arr) {
      cin >> x;
      set.insert(x);
      set.insert(x + 1);
      cnt[x]++;
    }
    int last = 0;
    int result = 0;
    for (int x : set) {
      int c = cnt[x];
      result += max(0, c - last);
      last = c;
    }
    cout << result << "\n";
  }
}
