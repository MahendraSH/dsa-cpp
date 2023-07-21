// Problem Statement : Given an array, and an element num the task is to find if num is present in the given array or not .If present print the index of the element or print - 1.

#include <bits/stdc++.h>
using namespace std;

int search(int *a, int n, int target)
{
    for(int i=0;i<n;i++){
      if(a[i]==target)
      return i;
    }
    return -1; 
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int target;
    cin >> target;
   cout<<  search(a,n,target) << endl;
}