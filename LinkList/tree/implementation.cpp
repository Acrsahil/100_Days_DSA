#include <bits/stdc++.h>
#include <cstdlib>
#include <queue>
using namespace std;


class node{
  public:
  int data;
  node * left;
  node * right;


  node(int data){
    this->data = data;
    left=right = NULL;
  }

};

  void inOrderTraversal(node* root) {
    if (root == NULL) return;

    inOrderTraversal(root->left);
    cout << root->data << " ";
    inOrderTraversal(root->right);
}
  void preOrderTraversal(node* root) {
    if (root == NULL) return;

    cout << root->data << " ";
    preOrderTraversal(root->left);
    preOrderTraversal(root->right);
}
  void postOrderTraversal(node* root) {
    if (root == NULL) return;

    postOrderTraversal(root->left);
    postOrderTraversal(root->right);
    cout << root->data << " ";
}
void levelOrderTraversal(node * root){
  if(root == NULL) return;

  queue<node * >q;
  q.push(root);
  int ans = 1;

  while(!q.empty()){
    node * data = q.front();
    cout << data->data<< " ";
    if(data->left != NULL) q.push(data->left);
    if(data->right != NULL) q.push(data->right);
    q.pop();
  }
}

void preOrderTraversalitrative(node * root){
  if(root == NULL) return;
  stack<node * >st;
  st.push(root);
  while(!st.empty()){
    node * curr = st.top();
    cout << curr->data << " ";
    st.pop();
    if(curr->right !=NULL) st.push(curr->right);
    if(curr->left != NULL) st.push(curr->left);
  }
}
int maximumdepthoftree(node * root){
  if(root == NULL) return 0;


  int l = maximumdepthoftree(root->left);
  int r = maximumdepthoftree(root->right);
  cout << endl;
  cout << "root-> "<< root->data << " " << "height->" << 1+(max(l,r)) << endl;

  return 1+max(l,r);
}
void InOrderTraversalitrativh(node * root){
  if(root == NULL) return;
  stack<node *>st;
  node * curr = root;
  while(true){
    if(curr != NULL){
      st.push(curr);
      curr = curr->left;
    }
    else{
      if(st.empty()) break;
      curr = st.top();
      st.pop();
      cout << curr->data << " ";
      curr = curr->right;
    }
  }

}

int main(){

  node * sahil = new node(5);
  sahil->left = new node(6);
  sahil->right = new node(7);
  sahil->right->left = new node(14);
  sahil->right->right = new node(24);
  sahil->right->right->left = new node(16);
  sahil->right->right->right = new node(50);
  sahil->left->left = new node(8);
  sahil->left->right = new node(9);
  sahil->left->right->left = new node(1);
  sahil->left->right->right = new node(23);
  sahil->left->right->right->left = new node(57);




  cout << "inOrderTraversal" << endl;
  inOrderTraversal(sahil);
  cout << endl;
  cout << "PreOrderTraversal" << endl;
  preOrderTraversal(sahil);
  cout << endl;
  cout << "PostOrderTraversal" << endl;
  postOrderTraversal(sahil);
  cout << endl;
  cout << "levelOrderTraversal" << endl;
  levelOrderTraversal(sahil);
  cout << endl;
  cout << "preOrderTraversalitrative" << endl;
  preOrderTraversalitrative(sahil);

  cout << endl;
  cout << "InOrderTraversalitrative" << endl;
  InOrderTraversalitrativh(sahil);




  cout << endl;
  cout << "The maximum height of the tree is" << maximumdepthoftree(sahil) << endl;
}
