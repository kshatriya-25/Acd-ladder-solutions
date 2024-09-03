/* OM VIGHNHARTAYE NAMO NAMAH : */

#include <bits/stdc++.h>
using namespace std;

#define int long long

void jaiShreeRam() {
  int n, m;
  cin >> n >> m;
  vector<vector<int>> cards(n, vector<int>(m));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> cards[i][j];
    }
  }

  int total = 0;

  for (int j = 0; j < m; j++) {
    vector<int> columns;
    for (int i = 0; i < n; i++) {
      columns.emplace_back(cards[i][j]);
    }
    sort(columns.begin(), columns.end());
    int prefix = 0;
    for (int i = 0; i < n; i++) {
      total += ((i)*columns[i]) - prefix;
      prefix += columns[i];
    }
  }
  cout << total << endl;
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