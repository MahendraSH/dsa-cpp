// 4. #Problem : Print from N to 1 using Recursion
#include <bits/stdc++.h>
using namespace std;
void printn(int n)
{
    if (n > 0)
    {

        cout << n << " ";
        printn(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    printn(n);
    cout << endl;
}
