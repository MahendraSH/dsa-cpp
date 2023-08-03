// 6.##Problem Statement : You are given an array of prices where prices[i] is the price of a given stock on an ith day.You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.Return the maximum profit you can achieve from this transaction.If you cannot achieve any profit, return 0.
#include <bits/stdc++.h>
using namespace std;
int profit(vector<int> a)
{
    int maxProfit = 0;
    int minPrice=a[0];
    for (int i : a)
    { 
       maxProfit= max(maxProfit , i-minPrice);
        minPrice=min(i,minPrice);
    }
    return maxProfit;
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
}