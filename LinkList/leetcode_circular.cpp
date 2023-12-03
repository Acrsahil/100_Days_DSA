#include <bits/stdc++.h>
using namespace std;

struct ListNode{
    int val;
    ListNode * next;
};
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode * x = head;
        ListNode * x2 = head -> next;
        while(x != NULL && x2 -> next != NULL){

            x2 = x->next -> next;
            x = x-> next;

        if(x2 == x){
            return true;
        } 
        }
        return false;
    }
};
int main()
{
    ListNode * head = new ListNode();
    ListNode * second = new ListNode();
    ListNode * third = new ListNode();

    head -> val = 15;
    head -> next = second;

    second -> val = 2;
    second -> next = third; 

    third -> val = 5;
    third -> next = NULL;

    Solution ans;
    bool res = ans.hasCycle(head);
    cout << res << endl;

    return 0;
}