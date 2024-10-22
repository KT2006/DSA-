#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};
Node* createTree(){
    int data;
    cout<<"enter the value for node:";
    cin>>data;
    //agar data -1 ho toh null return kro
    if(data == -1) return NULL;
    //step 1: create root node
    Node* root = new Node(data);
    //step 2: create left sub tree using recursion and attach it to root node ka left wala part
    cout<<"left value for "<<root->data<<endl;
    root->left = createTree();
    //step 3: create right sub tree using recursion and attach it to root node ka left wala part
    cout<<"right value for "<<root->data<<endl;
    root->right = createTree();

    return root;
}
void preOrderTraversal(Node* root){
    //base case lagao
    if(root == NULL) return;
    //NLR
    // N - current node ko process kro
    cout<<root->data<<" ";
    // L- left node ko process kro, ham yeh kaam recursion ko denge
    preOrderTraversal(root->left);//recursion recursively root node se pura left wala part sambhalega
    // R- left node ko process kro, yeh bhi recursion sambhalega
    preOrderTraversal(root->right);//recursively root nodde se pura right wala part sambhalega
}
void inOrderTraversal(Node* root){
    // L N R
    //base case lagao
    if(root == NULL){
        return;
    }
    //left node ko process kro
    inOrderTraversal(root->left);
    //current node ko process kro
    cout<<root->data<<" ";
    //right node ko process kro
    inOrderTraversal(root->right);
}
void postOrderTraversal(Node* root){
    // L R N
    //base case lagao
    if(root == NULL){
        return;
    }
    //left node ko process kro
    postOrderTraversal(root->left);
    //right node ko process kro
    postOrderTraversal(root->right);
    //current node ko process kro
    cout<<root->data<<" ";

}
int main(){
    Node* root = createTree();
    cout<<"preOrder Traversal:";
    preOrderTraversal(root);
    cout<<endl;
    cout<<"InOrder Traversal:";
    inOrderTraversal(root);
    cout<<endl;
    cout<<"postOrder Traversal:";
    postOrderTraversal(root);
    cout<<endl;
    return 0;
}