// Problem Link: https://www.geeksforgeeks.org/problems/minimize-the-heights3351/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int getMinDiff(int arr[], int n, int k)
  {
    sort(arr,arr+n);
    int smallest  = arr[0];
    int largest = arr[n-1];
    int diff = largest - smallest;
    for(int i = 1;i<n;++i)
    {
      largest = max(arr[i-1] + k,arr[n-1] - k);
      smallest = min(arr[i] - k,arr[0] + k); 
      // cout<<smallest<<endl;
      if(smallest < 0)
      {
        continue;
      }
      diff = min(diff,largest - smallest);
      
    }
    return diff;

    // return 0;
  }
};
int main()
{
  int arr[] = {1,2,4,5,9,10};
  Solution s;
  cout << s.getMinDiff(arr, 6, 1);

  return 0;
}