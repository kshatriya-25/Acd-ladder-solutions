/* OM VIGHNHARTAYE NAMO NAMAH :*/

#include <bits/stdc++.h>

using namespace std;

int searchMatrix(vector<vector<int> > &A, int B) {
  int n = A.size();
  int m = A[0].size();
  int left = 0, right = n * m - 1;
  while (left <= right) {
    int mid = left - (right - left) / 2;
    int mid_element = A[mid / m][mid % m];
    if (mid_element == B)
      return 1;
    else if (mid_element < B) {
      left = mid + 1;
    } else
      right = mid - 1;
  }
  return 0;
}
