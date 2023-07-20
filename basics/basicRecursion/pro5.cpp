// 5. #Problem statement : Given a number ‘N’, find out the sum of the first N natural numbers.
#include <bits/stdc++.h>
using namespace std;
void sum1(int n)
{

    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << sum << endl;
}
void sum2(int n)
{
    int sum = (n * (n + 1)) / 2;
    cout << sum << endl;
}
void sum3(int n, int sum)
{
    if (n > 0)
    {
        sum += n;
        sum3(n - 1, sum);
    }
    if(n==0){

    cout << sum << endl;
    }
}
int sum4(int n)
{
if(n==0){
    return 0;
}
    return n+sum4(n-1);
}
int main()
{
    int n;
    cin >> n;
    sum1(n);
    sum2(n);
    sum3(n, 0);
    cout<< sum4(n)<<endl;
}