// Problem Link: https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1

// Problem Statement: Given an array of size N containing only 0s, 1s, and 2s; sort the array in ascending order.

// using a non sorting algorithm.
// Here I have used Dutch Flag Algorithm or Three pointers method.
#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  void sort012(int arr[], int n)
  {
    int low = 0;
    int mid = 0;
    int high = n - 1;
    while (mid <= high)
    {
      if (arr[mid] == 0)
      {
        swap(arr[mid], arr[low]);
        ++mid;
        ++low;
      }
      else if (arr[mid] == 1)
      {
        ++mid;
      }
      else
      
      {
        swap(arr[high],arr[mid]);
        --high;
      }
    }

    for(int i = 0;i<n;++i)
    {
      cout<<arr[i]<<endl;
    }
  }
};

int main()
{
  Solution s;
  int arr[] = {0, 2,1,2,0};
  s.sort012(arr, 5);
  return 0;
}
