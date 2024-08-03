/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool canInflate(vector<int>& t, vector<int>& z, vector<int>& y, int totalTime,
                int m) {
  int totalBalloons = 0;
  int n = t.size();
  for (int i = 0; i < n; i++) {
    int cycleTime = z[i] * t[i] + y[i];
    int fullCycles = totalTime / cycleTime;
    int balloonsInFull = fullCycles * z[i];
    int remainTime = totalTime % cycleTime;
    int balloonsInRemainTime = min(z[i], remainTime / t[i]);
    totalBalloons += balloonsInFull + balloonsInRemainTime;
    if (totalBalloons >= m) return true;
  }
  return totalBalloons >= m;
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int m, n;
  cin >> m >> n;
  vector<int> t(n), z(n), y(n);
  for (int i = 0; i < n; i++) {
    cin >> t[i] >> z[i] >> y[i];
  }

  int l = -10, r = 1e12;
  while (l + 1 < r) {
    int mid = (l + r) >> 1;
    if (canInflate(t, z, y, mid, m))
      r = mid;
    else
      l = mid;
  }

  cout << r << endl;

  vector<int> balloons(n, 0);
  for (int i = 0; i < n; i++) {
    int cycleTime = z[i] * t[i] + y[i];
    int fullCycles = r / cycleTime;
    int balloonsInFullCycle = fullCycles * z[i];
    int remainTime = r % cycleTime;
    int balloonsInRemainTime = min(z[i], remainTime / t[i]);
    balloons[i] = balloonsInFullCycle + balloonsInRemainTime;
  }

  int totalBalloons = accumulate(balloons.begin(), balloons.end(), 0LL);
  int excess = totalBalloons - m;
  for (int i = 0; i < n && excess > 0; i++) {
    int reduce = min(balloons[i], excess);
    balloons[i] -= reduce;
    excess -= reduce;
  }

  for (int x : balloons) cout << x << " ";
  cout << endl;
}
