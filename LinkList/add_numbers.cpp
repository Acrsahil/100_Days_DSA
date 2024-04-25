#include <bits/stdc++.h>
#include <iterator>
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
        cout <<node->data << "->";
        node = node->next;
    }
  cout << "X";
  cout << endl;
}
Node * reverse(Node * head) {
    Node * prev = nullptr;
    Node * curr = head;
    Node * next = nullptr;

    while (curr != nullptr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    return prev;
}
Node * inserttail( int data){
  Node * temp = new Node();
  temp -> next = NULL;
  temp -> data = data;

  return temp;
}

Node *addition(Node *h1, Node *h2) {
    Node * ans = inserttail(0);
    int carry = 0;

    Node * l1 = h1, *l2 = h2, *curr = ans;
    while(l1 != NULL || l2 != NULL ) {
        int x = (l1 != NULL) ? l1->data : 0;
        int y = (l2 != NULL) ? l2->data : 0;
        int sum = carry + x + y;
        carry = sum / 10;
        curr->next = inserttail(sum % 10);

        if(l1) l1 = l1->next;
        if(l2) l2 = l2->next;
        curr = curr->next; // Move curr to the next node
    }

    if(carry > 0) {
    cout << carry << endl;
        curr->next = inserttail(carry);
    }
    return ans->next;
}

int main()
{
    // Allocate memory in link list in heap
    Node *head = new Node();
    Node *second = new Node();
    Node *third = new Node();
    Node *fourth = new Node();

    // Link first and second node
    head->data = 21;
    head->next = second;

    // Link second and third node
    second->data = 17;
    second->next = third;

    // Link third and fourth node
    third->data = 18;
    third->next = fourth;

    // Link third to Null (end the link list)
    fourth->data = 19;
    fourth->next = NULL;

    Node *l1 = new Node();
    Node *l2 = new Node();
    Node *l3 = new Node();
    Node * l4 = new Node();

    // Link first and second node
    l1->data = 5;
    l1->next = l2;

    // Link second and third node
    l2->data = 9;
    l2->next = l3;

    // Link third and fourth node
    l3->data = 8;
    l3->next  = l4;

    l4->data = 1;
    l4->next = NULL;


  LinkListTraversal(head);
  LinkListTraversal(l1);

  head  =  reverse(head);
  l1 = reverse(l1);

  cout  <<  endl;



  Node * ans = addition(head,l1);
  ans = reverse(ans);
  LinkListTraversal(ans);

}
