// 3. ## Delete a node in DLL [codingninjas](https://www.codingninjas.com/studio/problems/delete-last-node-of-a-doubly-linked-list_8160469)
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
Node *insert_begin(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        return new_node;
    }
    start->prev = new_node;
    new_node->next = start;
    return new_node;
}
Node *insert_end(Node *start, int val)
{
    Node *new_node = new Node(val);
    if (start == nullptr)
    {
        return new_node;
    }
    Node *p = start;
    while (p->next != nullptr)
    {
        p = p->next;
    }
    p->next = new_node;
    new_node->prev = p;
    return start;
}
Node *delete_end(Node *start)
{
    if (start == nullptr)
    {
        // cout << " empty" << endl;
        return start;
    }
    if(start->next==nullptr){
        return nullptr;
    }
    Node* p = start;
    while(p->next!=nullptr){
        p=p->next;
    }
    p->prev->next=nullptr;
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
int main()
{
    int n;
    cout << " Enter 1 for inset begin " << endl;
    cout << "Enter 2 for insert end" << endl;
    cout << "Enter 3 for delete end" << endl;
    cin >> n;
    Node *start = nullptr;
    while (n == 1 || n == 2 || n == 3)
    {

        if (n == 1)
        {
            int val;
            cout << "Enter a val to insert" << endl;
            cin >> val;
            start = insert_begin(start, val);
        }
        else if (n == 2)
        {
            int val;
            cout << "Enter a val to insert" << endl;
            cin >> val;
            start = insert_end(start, val);
        }
        if(n==3){
            start= delete_end(start);
        }
        display(start);
        cout << " Enter 1 for inset begin " << endl;
        cout << "Enter 2 for insert end" << endl;
        cout << " Enter 3 for deltete end " << endl;
        cin >> n;
    }
}