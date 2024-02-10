#include <bits/stdc++.h>
#include <cstddef>
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
// sorted list
Node *  RemoveDuplicateSorted(Node * head){
  Node * ptr = head;

  while(ptr  != NULL && ptr->next != NULL){
    if(ptr->data  == ptr->next->data){
      Node * nextnext = ptr->next->next;
      delete ptr->next;
      ptr -> next = nextnext;
    }else{
      ptr = ptr -> next;
    }
  }
  return head;
}

// unsorted list
Node * RemoveDuplicateUnSorted(Node * head){
  Node * temp1 = head;

  while(temp1 != NULL){
    Node * temp2 = temp1;

    while(temp2->next != NULL ){
      if(temp1->data == temp2->next->data){
        Node * delnode = temp2->next;
        cout << delnode->data << endl;
        temp2 -> next = temp2->next->next;
        delete delnode;
      }else{
        temp2 = temp2->next;
      }

    }
      temp1 = temp1->next;
  }
  return head;
}
Node* sRemoveDuplicateUnSorted(Node* head) {
    Node* temp1 = head;

    while (temp1 != NULL) {
        Node* temp2 = temp1;

        while (temp2->next != NULL) {
            if (temp1->data == temp2->next->data) {
                Node* deletenode = temp2->next;
                temp2->next = temp2->next->next;
                delete deletenode;
            } else {
                temp2 = temp2->next;
            }
        }

        temp1 = temp1->next;
    }

    return head;
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

    // Link first and second node
    head->data = 14;
    head->next = second;

    // Link second and third node
    second->data = 15;
    second->next = third;

    // Link third and fourth node
    third->data = 15;
    third->next = fourth;

    // Link third to Null (end the link list)
    fourth->data = 15;
    fourth->next = fifth;

    fifth->data = 16;
    fifth->next = sixth;

    sixth->data = 17;
    sixth->next = NULL;

LinkListTraversal(head);
  cout << "---------" << endl;
  // head = RemoveDuplicateUnSorted(head);
  head = RemoveDuplicateSorted(head);
  LinkListTraversal(head);
}
