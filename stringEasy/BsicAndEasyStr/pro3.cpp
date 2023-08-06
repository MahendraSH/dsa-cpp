// 3.##Largest odd number in a string
// ``` You are given a string num, representing a large integer.Return the largest - valued odd integer(as a string) that is a non - empty substring of num, or an empty string "" if no odd integer exists.
// ```
#include <bits/stdc++.h>
using namespace std;
string largestOddNumber1(string s)
{
    int n= s.length();
    int index =n;
    string ans ="";
    for(int i=n-1;i>=0;i--){
        if ((int)(s[i]-'0')%2==1){
            index=i;
            break;
        }
    }
    if(index==n){
        return ans;
    }
    for(int i =0;i<=index ;i++){
        ans.push_back(s[i]);
    }
    return ans;
}
string largestOddNumber2(string s)
{

    int n = s.length();

    for (int i = n - 1; i >= 0; i--)
    {
        if ((int)(s[i] - '0') % 2 == 1)
        {

            return s.substr(0, i + 1);
        }
    }
    return "";
}
int main()
{
    string s;
    cin>>s;
    cout<<largestOddNumber1(s)<<endl;
    cout<<largestOddNumber2(s)<<endl;
}