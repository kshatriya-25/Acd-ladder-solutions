/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool isDistancepsbl(vector<int> &stalls, int cows, int distance) {
  int p = 0;
  int kept = 1;
  for (int i = 1; i < stalls.size(); i++) {
    if (stalls[i] - stalls[p] >= distance) {
      kept++;
      p = i;                          // Place the next cow here
      if (kept == cows) return true;  // Successfully placed all cows
    }
  }
  return false;  // Not all cows could be placed
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);

  int n, k;
  cin >> n >> k;
  vector<int> stalls(n);
  for (int &x : stalls) cin >> x;

  int l = 0;  // Minimum possible distance
  int r = stalls[n - 1] -
          stalls[0];  // Maximum possible distance between first and last stall

  while (l < r) {
    int mid = (l + r + 1) / 2;  // Midpoint for distance, bias towards upper
                                // half to avoid infinite loop
    if (isDistancepsbl(stalls, k, mid))
      l = mid;  // If possible, try for a larger distance
    else
      r = mid - 1;  // Otherwise, try for a smaller distance
  }

  cout << l << endl;  // Largest possible minimum distance
}
