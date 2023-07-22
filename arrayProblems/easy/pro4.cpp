// Problem Statement : Given an integer array sorted in non - decreasing order, remove the duplicates in place such that each unique element appears only once.The relative order of the elements should be kept the same.
#include <bits/stdc++.h>
using namespace std;
bool isSorted(int *a, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (a[i - 1] >=a[i])
            return false;
    }
    return true;
}

int removeDuplicate(int *a, int n)
{
    int j = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[j] != a[i])
        {
            a[j + 1] = a[i];
            j++;
        }
    }
    return j + 1;
}
void display (int *a ,int n){
    for(int i=0;i<n;i++){
        cout << a[i]<< " ";
    }
    cout<< endl;
}
int main()
{
    int n;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    if (isSorted(a, n))
    {
        cout << " not sorted " << endl;
        return 1;
    }
    n = removeDuplicate(a,n);
    display(a,n);

}