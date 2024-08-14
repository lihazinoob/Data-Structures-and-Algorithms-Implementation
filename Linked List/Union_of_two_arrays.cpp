

#include<bits/stdc++.h>
using namespace std;
class Solution {
  public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(vector<int> arr1, vector<int> arr2) {
      int n1 = arr1.size();
      int n2 = arr2.size();
      int mergedarrsize = n1 + n2;
      vector<int>mergedarr(mergedarrsize,0);
      for(int i = 0;i<n1;i++)
      {
        mergedarr[i] = arr1[i];
        // cout<<mergedarr[i]<<endl;
      }
      for(int i = n1,j=0;i<mergedarrsize;i++,j++)
      {
        
        mergedarr[i] = arr2[j];
        
        // cout<<mergedarr[i]<<endl;
      }
      set<int>s;
      for(int i =0;i<mergedarrsize;i++)
      {
        s.insert(mergedarr[i]);
      }
      return s.size();

    }
};

int main()
{
  vector<int>arr1 = {1,3,4,56,34};
  vector<int>arr2 = {2,3,45,2,1};
  Solution s;
  cout<< s.doUnion(arr1,arr2);

  return 0;
}