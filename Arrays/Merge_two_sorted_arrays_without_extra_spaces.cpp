// Problem Link: https://www.geeksforgeeks.org/problems/merge-two-sorted-arrays-1587115620/1

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  // Function to merge the arrays.
  void merge(long long arr1[], long long arr2[], int n, int m)
  {
    int size1 = n - 1;
    int size2 = 0;
    while (size1 >= 0 && size2< m)
    {
      if (arr1[size1] > arr2[size2])
      {
        swap(arr1[size1],arr2[size2]);
      }
      size1--;
      size2++;
    }
    sort(arr1,arr1+ n);
    sort(arr2,arr2+ m);
    // for(int i = 0;i<n;i++)
    // {
    //   cout<<arr1[i]<<" ";

    // }
    // cout<<endl;
    // for(int i = 0;i<m;i++)
    // {
    //   cout<<arr2[i]<<" ";
    // }
  }
};

int main()
{
  long long int arr1[] = {1, 3, 5, 6, 7};
  long long int arr2[] = {0, 2, 3, 4};
  Solution s;
  s.merge(arr1, arr2, 5, 4);

  return 0;
}