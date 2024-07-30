/*OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

#define int long long
#define inf 1e18
#define neginf -1e18

int handleQueries(vector<int>& arr, int target) {
  int n = arr.size();
  int l = -1;
  int r = n;
  while (l + 1 < r) {
    int mid = l + (r - l) / 2;
    if (arr[mid] < target)
      l = mid;
    else
      r = mid;
  }
  return l + 1;
}

signed main() {
  ios ::sync_with_stdio(false);
  cin.tie(0);
  cout.tie(0);
  int n, k;
  cin >> n >> k;
  vector<int> arr;
  arr.push_back(neginf);
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    arr.push_back(x);
  }
  arr.push_back(inf);
  while (k-- > 0) {
    int q;
    cin >> q;
    cout << handleQueries(arr, q) << endl;
  }
}