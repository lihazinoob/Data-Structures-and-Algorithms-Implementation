// Problem Link: https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minJumps(int arr[], int n)
  {
    int ans = 0;
    // find max of maxi , i+arr[i]
    int i = 0;
    int j = 0;
    if (n == 1)
    {
      return 0;
    }
    while (i < n)
    {
      int maxi = 0;
      int maxval = 0;
      int last = arr[i] + i;
      int idx = -1;
      if (last >= n - 1)
      {
        ans++;
        return ans;
      }
      //  find maximum [i......j] -> jump = arr[i]+i at any ith index
      while (j <= last)
      {
        maxval = max(maxval, arr[j]);
        if (maxi < arr[j] + j)
        {
          maxi = arr[j] + j;
          idx = j;
        }
        j++;
      }
      if (maxval == 0)
        return -1;
      ans++;
      i = idx;
    }
  }
};

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  Solution s;
  cout << s.minJumps(arr, n);
  return 0;
}