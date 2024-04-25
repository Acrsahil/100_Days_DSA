#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

};
Node* linklist1(){

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Link first and second node
    head->data = 2;
    head->next = second;

    // Link second and third node
    second->data = 4;
    second->next = third;

    // Link third and fourth node
    third->data = 3;
    third->next = NULL;
    return head;
}
Node* linklist2(){

    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();

    // Link first and second node
    head->data = 5;
    head->next = second;

    // Link second and third node
    second->data = 6;
    second->next = third;

    // Link third and fourth node
    third->data = 4;
    third->next = NULL;
    return head;
}
Node *anslist(string ans){
    if(ans.empty()){
        return nullptr;
    }
    Node * head = new Node();
    head ->data = ans.back()-'0';
    ans.pop_back();
    head -> next = NULL;
    Node * p = head;
    int n = ans.size();
    while(n--){
        Node *temp = new Node();
        temp  -> data = ans.back()-'0';
        temp -> next = p->next;
        p->next = temp;
        p = temp;
        ans.pop_back();
    }
    return head;
}
void traverse(Node * &head){
    Node *  p = head;
    while(p != NULL){
        cout << p->data << " ";
        p = p -> next;
    }
}
string reverse(Node * &head){
    Node * p = head;
    string s  = "";
    while(p != NULL){
        s += ('0'+(p->data)) ;
        p = p->next;
    }
    reverse(s.begin(),s.end());
    return s;
}
int main()
{
    Node * link1 = linklist1();
    Node * link2 = linklist2();

    int l1 = stoi(reverse(link1));
    int l2 = stoi(reverse(link2));

    int sum = l1+l2;
    string ans = to_string(sum);
    Node *res = anslist(ans);

    traverse(res);
    return 0;
}
