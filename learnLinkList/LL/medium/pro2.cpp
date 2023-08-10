// 2. ## Problem Statement: Given the head of a singly linked list, write a program to reverse the linked list, and return the head pointer to the reversed list [codingninjas](https://www.codingninjas.com/studio/problems/reverse-linked-list_920513) [leetcode](https://leetcode.com/problems/reverse-linked-list/)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
};
Node *constructLL(vector<int> &a)
{
    // Write your code here
    Node *start = nullptr;
    Node *p = start;
    for (int i : a)
    {
        Node *newNode = new Node(i);
        if (start == nullptr)
        {
            start = newNode;
        }
        else
        {
            p->next = newNode;
        }
        p = newNode;
    }
    return start;
}
void display(Node *start)
{
    while (start != nullptr)
    {
        cout << start->data << " ";
        start = start->next;
    }
    return;
}
Node *reverse_ll1(Node *start)
{

    Node *prvios = nullptr;

    while (start)
    {
        Node *next_p = start->next;
        start->next = prvios;
        prvios = start;
        start = next_p;
    }

    return prvios;
}
Node *reverse_ll2(Node *start)
{
    if (!start || !start->next)
    {
        return nullptr;
    }
    Node *next_node = reverse_ll2(start->next);
    start->next->next = start;
    start->next = nullptr;
    return next_node;
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
    Node *start = constructLL(a);
    display(start);

    return 0;
}