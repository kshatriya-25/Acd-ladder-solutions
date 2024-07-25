/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int t;
  cin >> t;
  while (t-- > 0) {
    int n, m, h;
    cin >> n >> m >> h;
    int rank = 1;
    pair<int, int> rud;
    for (int i = 0; i < n; i++) {
      vector<int> pts(m);
      for (int j = 0; j < m; j++) {
        cin >> pts[j];
      }
      sort(pts.begin(), pts.end());
      int sum = 0, task_cunt = 0, penalty = 0;
      for (int j = 0; j < m; j++) {
        if (sum + pts[j] > h) break;
        sum += pts[j];
        penalty += sum;
        task_cunt++;
      }
      if (i) {
        if (make_pair(-task_cunt, penalty) < rud) rank++;
      } else
        rud = {-task_cunt, penalty};
    }
    cout << rank << endl;
  }
}