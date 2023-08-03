// 2. ## Problem Statement: Given an array consisting of only 0s, 1s, and 2s. Write a program to in-place sort the array without using inbuilt sort functions. ( Expected: Single pass-O(N) and constant space)
#include<bits/stdc++.h>
using namespace std;
void sortZ(int* a,int n){
    int z=0;
    int o=0;
    int t =0;
    for(int i =0;i<n;i++)
      a[i]==0 ?z++: a[i]==1==1 ? o++ :t++;

     cout<< z << " "<< o << " "<<t << endl;
    int j = 0;
    for (int i = 0; i < z; i++)
    {
      a[j] = 0;
      j++;
   }
   
   for(int i=0;i<o;i++){
    a[j]=1;
    j++;
   }
   for(int i=0;i<t;i++){
    a[j]=2;
    j++;
   }
   
     
}
int main () {
    int n;
    cin >>n;
    int * a =new int [n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sortZ(a,n);

    for(int i =0;i<n;i++){
        cout<< a[i]<< " ";
    }
    cout<<endl;
}