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
  Node * temp = new Node();
  temp = node;
    while (temp != NULL)
    {
        cout << "Element: "<< temp->data << endl;
        temp = temp->next;
    }
}
Node *  findMid(Node * head){
  if(head == NULL){
    return head;
  }
  Node * slow = head;
  Node * fast = head->next;

  while( fast != NULL && fast->next != NULL){
    slow = slow-> next;
    fast = fast-> next->next;
  }
  return slow;
}
Node * insertAthead(Node * head,int n){
    Node * temp = new Node();
    temp -> data = n;
  temp -> next = head;
  head = temp;
  return head;
}
// sorted link list

Node * merge(Node * h1, Node * h2) {
    Node *dummy = new Node(); // Created a dummy node to hold the merged list
    Node *temp = dummy; // Initialized temp pointer to dummy node

    while (h1 != NULL && h2 != NULL) {
        if (h1->data < h2->data) {
            temp->next = h1; // Update next pointer of temp to point to h1
            h1 = h1->next; // Move h1 to its next node
        } else {
            temp->next = h2; // Update next pointer of temp to point to h2
            h2 = h2->next; // Move h2 to its next node
        }
        temp = temp->next; // Move temp to its next node
    }

    // Connect the remaining elements of h1 or h2 to the merged list
    if (h1 != NULL) {
        temp->next = h1;
    } else {
        temp->next = h2;
    }

    return dummy->next; // Return the next node of the dummy node, which is the head of the merged list
}

Node * remdup(Node * head){
  if(head == NULL || head -> next == NULL){
    return head;
  }
  Node * temp = head;
  Node * nextnext;
  while(temp != NULL && temp -> next != NULL){
    if(temp -> data == temp->next->data){
      nextnext = temp->next->next;
      delete temp->next;
      temp -> next = nextnext;
    }else{
      temp = temp -> next;
    }
  }
  return temp;
}


Node * mergesort(Node * head){
  if(head == NULL || head -> next == NULL){
    return head;
  }
  Node * middle = findMid(head);
  Node * lefthead = head;
  Node * righthead = middle->next;

  middle->next = NULL;

  lefthead = mergesort(lefthead);
  righthead = mergesort(righthead);
  return merge(lefthead,righthead);
}
int main()
{
  // Allocate memory in link list in heap
  Node *h1 = new Node();
  h1 = NULL;

  h1 = insertAthead(h1, 12);
  h1 = insertAthead(h1, 66);
  h1 = insertAthead(h1, 9);
  h1 = insertAthead(h1, 99);
  h1 = insertAthead(h1, 23);

  cout << endl << "first list" << endl;
  LinkListTraversal(h1);
  // findMid(h1);

  Node * h2 = new Node();
  h2 = NULL;

  h2 = insertAthead( h2,28);
  h2 = insertAthead( h2,2);
  h2 = insertAthead( h2,5);
  h2 = insertAthead( h2,8);
  h2 = insertAthead( h2,2);

  cout << endl<< "Second list" << endl;
  LinkListTraversal(h2);

  Node * combine = new Node();
  combine = merge(h1,h2);
  Node * sortedlist = mergesort(combine);
  cout << "\n"<< "sorted list " << endl;
  remdup(sortedlist);

  LinkListTraversal(sortedlist);
  delete h1;
  delete h2;
}
