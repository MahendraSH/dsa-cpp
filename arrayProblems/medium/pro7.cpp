// 7.##Problem Statement : There’s an array ‘A’ of size ‘N’ with an equal number of positive and negative elements.Without altering the relative order of positive and negative elements, you must return an array of alternately positive and negative values.Note : Start the array with positive elements.

#include <bits/stdc++.h>
using namespace std;
vector<int> Alternate(vector<int> &a)
{
    int n = a.size();
    int p = 0;
    int q = 0;
    vector<int> ans = vector<int>(n);
    for (int i : a)
    {
        if(i>= 0){
            ans[p*2]=i;
            p++;
        }
        if(i<0){
            ans[q*2+1]=i;
            q++;
        }
    }
    return ans;
}
void display(vector<int> &a)
{
    for (int i : a)
    {
        cout << i << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        a.emplace_back(tem);
    }
    vector<int> ans = Alternate(a);
    display(ans);
}