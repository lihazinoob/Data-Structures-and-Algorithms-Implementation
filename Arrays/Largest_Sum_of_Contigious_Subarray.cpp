// Problem Link:https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1

#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    long long maxSubarraySum(vector<int> &arr) {
        long long int globalmax = LLONG_MIN;
        // return globalmax;
        long long int localmax =  0;
        for(int i = 0;i<arr.size();++i)
        {
          localmax = max(localmax+arr[i],(long long int)arr[i]);
          cout<<localmax<<endl;
          if(localmax>globalmax)
          {
            globalmax = localmax;
          }
        }
        return globalmax;


    }
};

int main()
{
  vector<int>arr = {1,2,3,-2,5};
  Solution s;
  cout<<s.maxSubarraySum(arr);
  return 0;
}