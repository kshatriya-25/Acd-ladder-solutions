/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long

bool canformcouncil(int k, vector<int> &groups, int x) {
  priority_queue<int> pq(groups.begin(), groups.end());
  for (int i = 0; i < x; i++) {
    int membersInCouncil = 0;
    vector<int> temp;
    while (membersInCouncil < k && !pq.empty()) {
      int largestgrp = pq.top();
      pq.pop();
      if (largestgrp > 0) {
        membersInCouncil++;
        temp.push_back(largestgrp - 1);
      }
    }
    if (membersInCouncil < k) return false;
    for (int remaining : temp) {
      if (remaining > 0) {
        pq.push(remaining);
      }
    }
  }
  return true;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int k, n;
  cin >> k >> n;
  vector<int> groups(n);
  int r = 0;
  for (int &x : groups) {
    cin >> x;
    r += x;
  }
  int l = -1;
  while (l + 1 < r) {
    int mid = (l + r) >> 1;
    if (canformcouncil(k, groups, mid))
      l = mid;
    else
      r = mid;
  }
  cout << l << endl;
}