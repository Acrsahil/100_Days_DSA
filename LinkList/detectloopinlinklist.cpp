#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
};
void LinkListTraversal(Node *node)
{
    while (node != NULL)
    {
        cout << "Element: "<< node->data << endl;
        node = node->next;
    }
}
 bool detect(Node * head){
    if(head -> next == NULL){
        return false;
    }
    if(head == NULL){
        return false;
    }
    Node * slow = head;
    Node * fast = head;
    while(slow != NULL && fast != NULL){
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        if(slow == fast){
            return true;
        }
    }
    return false;
}
Node * midpoint(Node * head){
    if(head -> next == NULL){
        return NULL;
    }
    if(head == NULL){
        return NULL;
    }
    Node * slow = head;
    Node * fast = head;
    while(slow != NULL && fast != NULL){
        slow = slow -> next;
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        if(slow == fast){
            return slow;
        }
    }
    return NULL;
}
Node * solve(Node * head){
    Node * intersection = midpoint(head);
    Node * slow = head;

    while(slow != intersection){
        slow = slow -> next;
        intersection = intersection -> next;
    }
    return slow;
}
void deletelooopinlist(Node * head){
  Node * startingloop = solve(head);
  Node * temp = startingloop -> next;
  while(temp != startingloop){
    temp = temp -> next;
  }
  temp -> next = NULL;

}
int main()
{
    // Allocate memory in link list in heap
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();
    Node *fifth = new Node();
    Node *sixth = new Node();
    Node *seventh = new Node();

    // Link first and second nods
    head->data = 7;
    head->next = second;

    // Link second and third node
    second->data = 11;
    second->next = third;

    // Link third and fourth node
    third->data = 14;
    third->next = fourth;

    // Link third to Null (end the link list)
    fourth->data = 25;
    fourth->next = fifth;

    fifth->data = 18;
    fifth->next = sixth;

    sixth->data = 12;
    sixth->next = seventh;

    seventh->data = 9;
    seventh->next = fourth;

    if(detect(head)){
        Node * ans = solve(head);
        cout << "starting Node of the loop is "  << ans -> data << endl;
    }else{
        cout << "Sorry loop is not presnet in the Link List" << endl;
    }
  deletelooopinlist(head);
    if(detect(head)){
        Node * ans = solve(head);
        cout << "starting Node of the loop is "  << ans -> data << endl;
    }else{
        cout << "Sorry loop is not presnet in the Link List" << endl;
    }
    // LinkListTraversal(head);

}
