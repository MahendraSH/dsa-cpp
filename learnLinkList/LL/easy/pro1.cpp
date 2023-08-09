// 1. ## Introduction to LinkedList, learn a… [codingninjas](https://www.codingninjas.com/studio/problems/introduction-to-linked-list_8144737)

#include <bits/stdc++.h>
using namespace std;
//  Definition of linked list
class Node
{
public:
    int data;
    Node *next;
    // void data(int data)
    // {
    //     this->data = data;
    // }
    // void next(Node *next)
    // {
    //     this->next = next;
    // }

    Node() : data(0), next(nullptr) {}
    Node(int x) : data(x), next(nullptr) {}
    Node(int x, Node *next) : data(x), next(next) {}
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
    cout << endl;
    return;
}
void display(vector<int> a)
{
    for (int i : a)
    {
        cout << i << " ";
    }
    cout << endl;
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
    display(a);
}