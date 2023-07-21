// Problem Statement : Given an array that contains only 1 and 0 return the count of maximum consecutive ones in the array.
#include <bits/stdc++.h>
using namespace std;
int findMaxConOneS(vector<int> a)
{
    int maxOnes=0;
    int count=0;
    for(int i=0;i<a.size() ;i++){
        if(a[i]==1){
            count++;
        }
        else{
            count=0;
        }
        maxOnes=max(count,maxOnes);
    }
    return maxOnes;
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
    cout << findMaxConOneS(a) << endl;
}