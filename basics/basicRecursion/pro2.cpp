// 2. #Problem : Print your Name N times using recursion

#include <bits/stdc++.h>
using namespace std;
void printName(int n)
{
    if (n > 0)
    {
        cout << "Mahendra" << endl;
        printName(n - 1);
    }
}
int main()
{
    int n;
    cin >> n;
    printName(n);
}