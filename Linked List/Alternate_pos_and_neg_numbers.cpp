// Problem Link: https://www.geeksforgeeks.org/problems/array-of-alternate-ve-and-ve-nos1401/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card

#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  void rearrange(int arr[], int n)
  {
    // code here
    vector<int> neg;
    vector<int> pos;
    for (int i = 0; i < n; i++)
    {
      if (arr[i] < 0)
      {
        neg.push_back(arr[i]);
      }
      else
      {
        pos.push_back(arr[i]);
      }
    }
    vector<int> ans;
    int i = 0;
    int j = 0;
    int k = 0;

    while (k < n)
    {

      if (i != pos.size())
      {
        arr[k] = pos[i];
        k++;
        i++;
      }

      if (j != neg.size())
      {
        arr[k] = neg[j];
        k++;
        j++;
      }
    }
    return;
  }
};

int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; ++i)
  {
    cin >> arr[i];
  }
  Solution s;
  s.rearrange(arr, n);
  return 0;
}