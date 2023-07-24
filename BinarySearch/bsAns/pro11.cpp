// 11.##Problem Statement : Given an array / list of length ‘N’, where the array / list represents the boards and each element of the given array / list represents the length of each board.Some ‘K’ numbers of painters are available to paint these boards.Consider that each unit of a board takes 1 unit of time to paint.You are supposed to return the area of the minimum time to get this job done of painting all the ‘N’ boards under the constraint that any painter will only paint the continuous sections of boards.

#include<bits/stdc++.h>
using namespace std;
int findSum(vector<int> &a ){
    int sum =0;
    for(int i: a){
sum+=i;
    }
    return sum;
}
int findMaxele (vector<int> &a){
    int maxele =a[0];
    for(int i:a){
        maxele=max(maxele,i);
    }
    return maxele;
}
int isPossible(vector<int>& a,int k ,int mid){
    int sum =0;
    int count=1;
      for(int i:a){
        if(sum+i> mid){
            count++;
            sum=i;
        }else{
            sum+=i;
        }
      }

      return count>k?1:-1;
}
int findMaxborder(vector<int> &a ,int k){
   int start =findMaxele(a);
   int end =findSum(a);
   while(start<=end){
    int mid=start+(end-start)/2;
     if(isPossible(a,k,mid)==1){
         start=mid+1;
     }else {
          end =mid-1;
     }
   }
   return start;
}
int main (){
    int n;
    cin>>n;
    vector<int> a;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        a.emplace_back(temp);
    }
    int k;
    cin>>k;
}