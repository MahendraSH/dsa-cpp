//  13. ## Find the intersection point of Y LL  [codingninjas](https://www.codingninjas.com/studio/problems/-intersection-of-two-linked-lists_630457?leftPanelTab=0)
#include "bits/stdc++.h"
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

Node *findIntersection(Node *start1, Node *start2)
{
    // Write your code here
    unordered_set<Node *> a;
    while (start1)
    {
        a.emplace(start1);
        start1 = start1->next;
    }
    while (start2)
    {
        if (a.find(start2) != a.end())
            return start2;
        start2 = start2->next;
    }
    return NULL;
}
