#include<iostream>
#include<queue>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data = data;
        this->right = NULL;
        this->left = NULL;
    }
};
Node* createTree(){
    int data;
    cout<<"Enter a value for node:";
    cin>>data;
    if(data == -1) return NULL;

    //step 1: create root node
    Node* root = new Node(data);
    //step 2: create the left subtree and attach it to left part of root node
    cout<<"value for left node of:"<<root->data<<endl;
    root->left = createTree();
    //step 3: create the right subtree and attach it to right part of root node
    cout<<"value for right node of:"<<root->data<<endl;
    root->right = createTree();

    return root;
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    //asli traversal ab hoga
    while(!q.empty()){
        Node* front = q.front();
        q.pop();
        cout<<front->data<<" ";
        //push front ka left child
        if(front->left != NULL){
            q.push(front->left);
        }
        if(front->right !=NULL){
            q.push(front->right);
        }
    }
}
void levelOrderTraversalUsingMarkers(Node* root){
    //initial step
    queue<Node*>q;
    q.push(root);
    q.push(NULL);

    //asli traversal
    while(q.size()>1){//!q.empty() use karne par last null pe yeh infinite loop m fas rha h
        Node* front = q.front();
        q.pop();
        if(front == NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
            cout<<front->data<<" ";
            if(front->left != NULL){
                q.push(front->left);
            }
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }

}
int main(){
    Node* root = createTree();
    levelOrderTraversal(root);
    cout<<endl;
    levelOrderTraversalUsingMarkers(root);
    return 0;
}