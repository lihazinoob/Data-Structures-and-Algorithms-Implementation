// Problem Statement: An array contains both positive and negative numbers in random order. Rearrange the array elements so that all negative numbers appear before all positive numbers.

#include<bits/stdc++.h>
using namespace std;

class Solution{
  public:
  void part(vector<int>&arr)
  {
    int left = 0;
    int right = arr.size() -1;
    while(left<=right)
    {
      if(arr[left] < 0 && arr[right] < 0)
      {
        ++left;
      }
      else if(arr[left]>0 && arr[right] < 0)
      {
        swap(arr[left],arr[right]);
        ++left;
        --right;
      }
      else if(arr[left]<0 && arr[right] >0)
      {
        --right;
      }
      else
      {
        --left;
        ++right;
      }
    }
  }
};

int main()
{
  vector<int>vect = {-12,11,-13,-5,6,-7,5,-3,-6};
  Solution s;
  s.part(vect);
  for(int i =0;i< vect.size();++i)
  {
    cout<<vect[i]<<endl;
  }
  return 0;
}