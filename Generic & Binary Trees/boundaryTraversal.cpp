#include<iostream>
using namespace std;
// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1

class Node{
  public:
  int data;
  Node* left;
  Node* right;
  Node(int data){
    this->data = data;
    this->right= NULL;
    this->left = NULL;
  }
};
Node* createTree(){
    int val;
    cout<<"Enter the value for node:";
    cin>>val;
    //make sure u include val == -1 wala case
    if(val == -1) return NULL;
    //is value ki node banao
    Node* root = new Node(val);
    //abhi left aur right k liye recursive calls kro
    cout<<"Enter the left value for node "<<root->data<<endl;
    root->left = createTree();
    //right k liye recursive call
    cout<<"Enter the right value for node "<<root->data<<endl;
    root->right = createTree();

    return root;
}
void printLeftBoundary(Node* root){
    //2 imp base cases lagao
    if(root == NULL) return;
    //leaf node wala base case lagao
    if(root->left==NULL && root->right == NULL) return;

    //print karo
    cout<<root->data<<" ";
    //recursive call kro 
    //agar left jaana possible hai oh left m chale jaao, agar possible nhi toh hi right m jaana
    if(root->left!=NULL){
        printLeftBoundary(root->left);
    }
    else{
        printLeftBoundary(root->right); 
    }
}
void printAllLeafNodes(Node* root){
    //print all leaf nodes using any traversal

    //base case
    if(root == NULL) return;
    //printing leaf nodes
    if(root->left == NULL && root->right == NULL){
        cout<<root->data<<" ";
    }
    //left aur right ki call lagao
    printAllLeafNodes(root->left);
    printAllLeafNodes(root->right);
}
void printRightBoundary(Node* root){
    //1st base case
    if(root == NULL) return;
    //leaf node wala base case
    if(root->left == NULL&&root->right==NULL) return;
    //print karo root ka data
    //if else lagake right call kro
    if(root->right!=NULL){
        printRightBoundary(root->right);
    }
    else{
        // cout<<root->data<<" ";
        printRightBoundary(root->left);
    }
    cout<<root->data<<" ";
}
void boundaryTraversal(Node* root){
    if(root==NULL) return;
    cout<<root->data<<" ";
    printLeftBoundary(root->left);
    printAllLeafNodes(root->left);//leaf nodes right aur left part ke alag se print kr rha hu
    printAllLeafNodes(root->right);//kyunki ek saath print krne se do single node wala case m do baar print ho rhi h
    printRightBoundary(root->right);
}
int main(){
    Node* root = createTree();
    //cout<<endl<<root->data<<endl;
    // cout<<endl;
    // cout<<"print left branch:";
    //  printLeftBoundary(root);
    // cout<<endl;
    // cout<<"printing all leaf nodes:";
    // printAllLeafNodes(root);
     cout<<endl;
    // cout<<"Printing right branch:";
    // printRightBoundary(root);
    boundaryTraversal(root);
    return 0;
}