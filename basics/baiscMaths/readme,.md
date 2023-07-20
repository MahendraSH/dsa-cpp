# 1


## pro1.cpp

```Problem Statement: Given an integer N, write a program to count the number of digits in N.

```

```cpp
#include <bits/stdc++.h>
void method1(int n){

    int count =0;
    while(n>0){
        n=n/10;
        count++;
    }
    cout << count<< endl;
}
using namespace std;
int main()
{
    int n;
    cout << "enter the number " << endl;
    cin >> n;
    method1(n)
}
```
