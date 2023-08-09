// 1. ## ntroduction to DLL, learn about st… [codingninjas](https://www.codingninjas.com/studio/problems/introduction-to-doubly-linked-list_8160413)
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next, *prev;
    Node() : data(0), next(nullptr), prev(nullptr) {}
    Node(int data) : data(data), next(nullptr), prev(nullptr) {}
    Node(int data, Node *next, Node *prev) : data(data), next(next), prev(prev) {}
};
Node *constructDLL(vector<int> &a)
{
    Node *start = nullptr;
    Node *p = start;
    // Write your code here
    for (int i : a)
    {
        Node *new_node = new Node(i);
        if (start == nullptr)
        {
            start = new_node;
        }
        else
        {
            p->next = new_node;
            new_node->prev = p;
        }
        p = new_node;
    }
    return start;
}
void display(vector<int> a)
{
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
    return;
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
    Node *start = constructDLL(a);
    cout << " vector" << endl;
    display(a);
    cout << " linkList" << endl;
    display(start);
}