// 1. ## Problem Statement: Given the head of a singly linked list, return the middle node of the linked list. If there are two middle nodes, return the second middle node. [codingninjas](https://www.codingninjas.com/studio/problems/middle-of-linked-list_973250?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf) [leetcode](https://leetcode.com/problems/middle-of-the-linked-list/)

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
Node *findMid1(Node *start)
{
    if (start == nullptr)
    {
        return start;
    }
    int count = 0;
    Node *p = start;
    while (p != nullptr)
    {
        p = p->next;
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        start = start->next;
    }
    return start;
}
Node *findMId2(Node *start)
{
    Node *p = start;
    while (p && p->next)
    {
        start = start->next;
        p = p->next->next;
    }
    return start;
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