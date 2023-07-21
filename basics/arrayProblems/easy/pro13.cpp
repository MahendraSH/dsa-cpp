// Problem Statement : Given an array and a sum k, we need to print the length of the longest subarray that sums to k.
#include <bits/stdc++.h>
using namespace std;
//  using two loops 
int sub_array_sum_given1(vector<int> a , long long k){

 int max_count=0;
   for(int i=0;i<a.size();i++){
     int count=0;
     long long sum=0;
     for(int j=i;j<a.size();j++){
        sum+=a[j];
        count++;
        if(sum==k){
            max_count= max(count,max_count);
        }
     }
   }
   return max_count;
}
//  Better Approach(Using Hashing):
int sub_array_sum_given2(vector<int> a ,long long k ){
  
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int temp;
        cin >> temp;
        a.emplace_back(temp);
    }

    long long k ;
    cin >> k;

    cout<< " s1 ="<<sub_array_sum_given1(a,k);
}