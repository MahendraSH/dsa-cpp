// 5. ## Starting point of loop in a Linked List [codingninjas](https://www.codingninjas.com/studio/problems/linked-list-cycle-ii_1112628) [leetcode](https://leetcode.com/problems/linked-list-cycle-ii/)

#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
};
Node *started_loop(Node *start)
{
    Node *fast = start;
    Node *slow = start;
    if (start && start->next)
    {
        while (fast->next && fast->next->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                while (slow != start)
                {
                    slow = slow->next;
                    start = start->next;
                }
                return start;
            }
        }
    }
    return nullptr;
}
int main()
{
}