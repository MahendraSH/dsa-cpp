// 1. ## Problem Statement: You are given a positive integer n. Your task is to find and return its square root. If ‘n’ is not a perfect square, then return the floor value of ‘sqrt(n)’.
#include <bits/stdc++.h>
using namespace std;
int findSqrt(int n)
{
    int start= 0;
    int end = n/2;
    while (start<=end)
    {
       int mid= start+(end-start)/2;
       if(mid * mid == n){
        return mid;
       }else if(n< mid* mid){
         end =mid-1;
       }else {
        start =mid+1;
       }
    }
    return end;
    
}
int main()
{
    int n;
    cin >> n;
    cout << findSqrt(n) << endl;
    cout << sqrt(n)<< endl;
}