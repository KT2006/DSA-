#include <iostream>
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
  cout<<"Enter the data for node:";
  cin>>data;
  //base case
  if(data == -1){
    return NULL;
  }
  //else node bana
  Node* root = new Node(data);
  //left subtree bana recursion se
  cout<<"Enter the left value for node->"<<root->data<<endl;
  root->left = createTree();
  //right subtree bana recursion se
  cout<<"Enter the right value for node->"<<root->data<<endl;
  root->right = createTree();

  return root;
}
void levelOrderTraversal(Node* root){
    queue<Node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        //front ko fetch kro
        Node* front = q.front();
        q.pop();
        if(front==NULL){
            cout<<endl;
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<front->data<<" ";
            //left wala element push kro
            if(front->left != NULL){
                q.push(front->left);
            }
            //right wala element push kro
            if(front->right != NULL){
                q.push(front->right);
            }
        }
    }
}
int main() {
  Node* root = createTree();
  levelOrderTraversal(root);
  return 0;
}