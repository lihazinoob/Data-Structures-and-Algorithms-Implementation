// Problem Link : https://www.geeksforgeeks.org/problems/kth-smallest-element5635/1

// Problem Statement: Given an array arr[] and an integer k where k is smaller than the size of the array, the task is to find the kth smallest element in the given array. It is given that all array elements are distinct.

// Note:-  l and r denotes the starting and ending index of the array.

// Using Merge Sort Algorithm to sort an array

#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
  // arr : given array
  // l : starting index of the array i.e 0
  // r : ending index of the array i.e size-1
  // k : find kth smallest element and return using this function
  int kthSmallest(int arr[], int l, int r, int k)
  {
    // code here
    mergeSort(arr, 0, r);
    return arr[k-1];
    
  }

  void mergeSort(int vect[], int left, int right)
  {

    if (left >= right)
    {
      return;
    }
    else
    {
      int mid = (left + right) / 2;

      mergeSort(vect, left, mid);
      mergeSort(vect, mid + 1, right);
      // cout << left << " " << right << " " << mid << endl;
      merge(vect, left, mid, right);
    }
  }
  void merge(int arr[], int left, int mid, int right)
  {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Create temp vectors
    vector<int> L(n1), R(n2);

    // Copy data to temp vectors L[] and R[]
    for (int i = 0; i < n1; i++)
    {
      L[i] = arr[left + i];
      // cout<<L[i]<<" ";
    }
    // cout<<endl;
    for (int j = 0; j < n2; j++)
      R[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    // Merge the temp vectors back
    // into arr[left..right]
    while (i < n1 && j < n2)
    {
      if (L[i] <= R[j])
      {
        arr[k] = L[i];
        i++;
      }
      else
      {
        arr[k] = R[j];
        j++;
      }
      k++;
    }

    // Copy the remaining elements of L[],
    // if there are any
    while (i < n1)
    {
      arr[k] = L[i];
      i++;
      k++;
    }
  }
};

int main()
{
  int arr[]= {78, 454, 98, 1, 34, 5666, 56, 1, 56};
  Solution s;
  cout<<s.kthSmallest(arr,0,8,3);

  // for(int i = 0;i<9;i++)
  // {
  //   cout<<vect1[i]<<endl;
  // }
  return 0;
}