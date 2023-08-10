// 9. ## Delete Kth Node From End  [codingninjas](https://www.codingninjas.com/studio/problems/delete-kth-node-from-end_799912) [leetcode](https://leetcode.com/problems/remove-nth-node-from-end-of-list/)
#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node *next)
    {
        this->data = data;
        this->next = next;
    }
};

Node *removeKthNode(Node *start, int K)
{
    // Write your code here.
    int n = 0;
    Node *p = start;
    while (p)
    {
        p = p->next;
        n++;
    }
    n = n - K;
    p = start;
    for (int i = 0; i < n - 1; i++)
    {
        p = p->next;
    }
    if (n == 0)
    {
        return p->next;
    }
    p->next = p->next->next;
    return start;
}
