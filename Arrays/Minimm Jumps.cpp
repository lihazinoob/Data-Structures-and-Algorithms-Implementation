// Problem Link: https://www.geeksforgeeks.org/problems/minimum-number-of-jumps-1587115620/1

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  int minJumps(int arr[], int n)
  {
    if (arr[0] == 0)
    {
      return -1;
    }
    int traversingpointer = 0;
    int memorypointer = 0;
    int count = 0;
    while (true)
    {
      if (traversingpointer < n)
      {
        memorypointer = traversingpointer;
        traversingpointer += arr[traversingpointer];
        int reversertraversepointer = traversingpointer;
        while (true)
        {
          if (reversertraversepointer > memorypointer)
          {
            if (arr[reversertraversepointer] == 0)
            {
              reversertraversepointer--;
              continue;
            }
            else
            {
              ++count;
              break;
            }
          }
          else
          {
            return -1;
          }
        }
      }
      else
      {
        return count;
      }
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
  cout<<s.minJumps(arr, n);
  return 0;
}