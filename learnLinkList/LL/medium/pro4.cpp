// 4. ## Problem Statement: Given head, the head of a linked list, determine if the linked list has a cycle in it. There is a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer. Return true if there is a cycle in the linked list. Otherwise, return false. [codingninjas](https://www.codingninjas.com/studio/problems/cycle-detection-in-a-singly-linked-list_628974) [leetcode](https://leetcode.com/problems/linked-list-cycle/)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node() : data(0), next(nullptr) {}
    Node(int data) : data(data), next(nullptr) {}
    Node(int data, Node *next) : data(data), next(next) {}
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
Node *make_loop(Node *start, int pos)
{
    Node *p = start;
    while (p->next)
    {
        p = p->next;
    }

    Node *q = start;
    for (int i = 0; i < pos; i++)
    {
        q = q->next;
    }
    cout << q->data << "loop  " << endl;

    p->next = q;
    return start;
}
bool isCycle1(Node *start)
{
    Node *slow = start;
    Node *fast = start;
    if (!start || !start->next)
    {
        return false;
    }
    while (fast->next && fast->next->next)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            return true;
    }
    return false;
}
bool isCycle2(Node *start)
{
    while (start)
    {

        start = start->next;
    }
    // this is in sheet 1st method
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

    int pos;
    cin >> pos;
    start = make_loop(start, pos);
}