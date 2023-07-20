
// 8. #Problem Statement : “Given a string, check if the string is palindrome or not .” A string is said to be palindrome if the reverse of the string is the same as the string.
#include <bits/stdc++.h>
using namespace std;
void res1(string s)
{
    for (int i = 0, j = s.length() - 1; i < j; i++, j--)
    {
        if (s[i] != s[j])
        {
            cout << " not pallidrome" << endl;
            return;
        }
    }
    cout << "pallindrome" << endl;
}
void res2(string s, int start= 0 ){
    if(start<s.length()/2){
       if(s[start] != s[s.length()-start-1]){

        cout<<"not pallindrome"<< endl;
        return ;
       }

       res2(s,start+1);

    }
    else {
        cout<<"pallindrome"<< endl;
        return ;
    }
}
int main()
{
    string s;
    cin >> s;
    res1(s);
    res2(s);
}