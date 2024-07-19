/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

signed main() {
  ios_base ::sync_with_stdio(false);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, m;
    cin >> n >> m;
    vector<string> grid1, grid2;
    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      grid1.push_back(s);
    }

    for (int i = 0; i < n; i++) {
      string s;
      cin >> s;
      grid2.push_back(s);
    }
    int sr1[m]{}, sr2[m]{}, sc1[n]{}, sc2[n]{};
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        sr1[j] += (int)(grid1[i][j] - '0');
        sr1[j] %= 3;
        sr2[j] += (int)(grid2[i][j] - '0');
        sr2[j] %= 3;
        sc1[i] += (int)(grid1[i][j] - '0');
        sc1[i] %= 3;
        sc2[i] += (int)(grid2[i][j] - '0');
        sc2[i] %= 3;
      }
    }
    bool ok = 1;
    for (int j = 0; j < m; j++) ok &= (sr1[j] == sr2[j]);
    for (int i = 0; i < n; i++) ok &= (sc1[i] == sc2[i]);
    if (ok)
      cout << "YES \n";
    else
      cout << "NO \n";
  }
}