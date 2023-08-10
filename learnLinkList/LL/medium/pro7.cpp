// 7. ## Check if given Linked List is Plaindrome   [codingninjas](https://www.codingninjas.com/studio/problems/check-if-linked-list-is-palindrome_985248) [leetcode](https://leetcode.com/problems/palindrome-linked-list/)
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
bool isPalindrome_if_no_zero(Node *start)
{
    // write your code here

    Node *slow = start;
    Node *fast = start;
    if (!start || !start->next)
        return true;
    int ans = 0;
    while (fast->next && fast->next->next)
    {
        ans ^= slow->data;
        slow = slow->next;
        fast = fast->next;
    }
    int some = slow->data;

    while (slow)
    {
        ans ^= slow->data;
        slow = slow->next;
    }
    return ans == 0 || ans == some ? true : false;
}
Node *reverse_nodes(Node *start)
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
bool isPalindrome(Node *start)
{
    if (!start && !start->next)
        return true;
    Node *slow = start;
    Node *fast = start;
    Node *p = start;

    while (fast->next && fast->next->next)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    slow = reverse_nodes(slow);
    while (slow && start)
    {
        if (start->data != slow->data)
        {
            return false;
        }
        slow = slow->next;
        start = start->next;
    }

    return true;
}
Node *constructLL(vector<int> a)
{
    Node *start = nullptr;
    Node *p = start;
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
        }
        p = new_node;
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
    cout << " is palindrome =" << isPalindrome(start) << endl;
}