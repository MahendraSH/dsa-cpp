// 2. ## Delete all occurrences of a key in … [codingninjas](https://www.codingninjas.com/studio/problems/find-pairs-with-given-sum-in-doubly-linked-list_1164172)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
    Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev) {}
};
Node *consDll(vector<int> a)
{
    Node *start = nullptr;
    Node *p = nullptr;
    for (int i : a)
    {
        Node *new_node = new Node(i);
        if (!start)
            start = new_node;
        else
        {
            new_node->prev = p;
            p->next = new_node;
        }
        p = new_node;
    }
    return start;
}
void display(vector<pair<int, int>> a)
{
    for (pair<int, int> i : a)
    {
        cout << i.first << " " << i.second << " " << endl;
    }
    cout << endl;
}
void display(Node *start)
{
    while (start != nullptr)
    {
        cout << start->data << " ";
        start = start->next;
    }
    cout << endl;
    return;
}
vector<pair<int, int>> findPairOfSum(Node *start, int k)
{
    vector<pair<int,int>>a;
    Node *end = start;
    while (end->next)
    {
        end = end->next;
    }
    while(start->data < end->data){

       int sum = start->data + end->data;
       if(sum== k){
          a.emplace_back(make_pair(start->data, end->data));
          start = start->next;
          end = end->prev;
       }
       else if(sum > k){
        end =end ->prev;
       }
       else {
        start =start->next;
       }
    }
    return a;
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
    int k;
    cin >> k;
    Node *start = consDll(a);
    display(start);
    display(findPairOfSum(start, k));
}