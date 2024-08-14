// Problem Link: https://www.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1

#include<bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void rotate(vector<int> &arr) {
        int first = 0;
        int last = arr.size() -1;
        while(first<last)
        {
            swap(arr[first],arr[last]);
            ++first;
        }
    }
};

int main()
{
  vector<int> arr = {1,2,3,4,5};
  Solution s ;
  s.rotate(arr);
  return 0;

}