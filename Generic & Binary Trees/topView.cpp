// 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
//run it on replit using console thing and copy paste the above values
#include<iostream>
#include<map>
#include<queue>
using namespace std;

class Node{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
 Node* createTree2(){
    //take input for node
    int data;
    cout<<"enter the value for node:";
    cin>>data;
     if(data ==-1){
         return NULL;
     }
    Node* root = new Node(data);
    //left aur right subtree banao
    cout<<"enter the left value for node "<<root->val<< " -> ";
   root->left =  createTree2();
   cout<<"Enter the right value for node"<<root->val<<" -> ";
   root->right = createTree2();

   return root;
 }
void topView(Node* root ){
    map<int,int> hdToNode;
    queue<pair<Node*,int>>q;
    //initial state of queue
    q.push(make_pair(root,0));

    //level order wali cheez krde
    while(!q.empty()){
        //fetch the front element of the queue (pair ke form m elements rkhe h toh pair fetch kr)
        pair<Node*, int> front = q.front();
        Node* frontNode = front.first;
        int frontHd  = front.second;
        q.pop();
        //if there is no existing entry for horizontal distance (hd) in map then create one
        if(hdToNode.find(frontHd)==hdToNode.end()){
            hdToNode[frontHd] = frontNode->val;
        }
        //check if the left exist, if yes then push it
        if(frontNode->left != NULL){
            q.push(make_pair(frontNode->left,frontHd-1));//left m jaa rhe ho isiliye hd-1;
        }
        if(frontNode->right != NULL){
            q.push(make_pair(frontNode->right,frontHd+1));
        }

      
    }
        cout<<"PRINTING TOP VIEW:"<<endl;
        for(auto i:hdToNode){
                cout<<i.second<<" ";
        }
        cout<<endl;
}
int main(){
    Node* root = createTree2();
    topView(root);
    return 0;
}