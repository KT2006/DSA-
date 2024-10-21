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
    cout<<"Enter the value of node:";
    cin>>data;
    if(data == -1) return NULL; //koi node lagane ki jarurat nhi
    //step-1 create root node
    Node* root = new Node(data);
    //step 2 create left subtree
    cout<<"left value of node:"<<root->data<<endl;
    root->left = createTree();
    //step 3 - create right subtree
    cout<<"right value of node:"<<root->data<<endl;
    root->right = createTree();
    return root;
}
int main(){
    cout<<"hello world"<<endl;
    Node* root = createTree();
    return 0;
}