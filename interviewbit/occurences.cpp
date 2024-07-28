/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

int findCount(const vector<int> &A, int B) {
  int s = lower_bound(A.begin(), A.end(), B) - A.begin();
  if (A[s] != B) return 0;
  int count = 0;
  while (A[s] == B && s < A.size()) {
    count++;
    s++;
  }
  return count;
}