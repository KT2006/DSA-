    //Right view is similar bas pehle right ki call maarna
//run it on replit using console thing and copy paste the above values
    // 10 20 40 -1 -1 50 70 110 -1 -1 111 -1 -1 80 -1 -1 30 -1 60 -1 90 112 -1 -1 113 -1 -1
    #include<iostream>
    #include<vector>
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
    Node* createTree(){
        int data;
        cout<<"Enter the value of the node:";
        cin>>data;
        if(data == -1) return NULL;
        //node banake data usmein store kro
        Node* root = new Node(data);
        //left ki call lagao
        cout<<"Enter the value for the left node of "<<root->val<<endl;
        root->left = createTree();
        //right ki call laga di
        cout<<"Enter the value for the right node of "<<root->val<<endl;
        root->right = createTree();

        return root;

    }
    void levelOrderTraversal(Node* root){
        queue<Node*>q;
        q.push(root);
        q.push(NULL);
        while(!q.empty()){
            Node* front = q.front();
            q.pop();
            if(front == NULL){
                cout<<endl;
                if(!q.empty()){
                    q.push(NULL);
                }
            }
        else{
            cout<<front->val<<" ";
            if(front->left != NULL) q.push(front->left);
            if(front->right != NULL) q.push(front->right);
        }
        }
    }
    void preOrderTraversal(Node* root){ // N L R
        //base case
        if(root == NULL) return;
        //print element 
        cout<<root->val<<" ";
        //left ki call laga
        preOrderTraversal(root->left);
        preOrderTraversal(root->right);
    }
    void leftView(Node* root,int level,vector<int> &v){
        if(root == NULL) return;

        //condition check krke print kro
        if(v.size() == level){
            v.push_back(root->val);
        }
        //left ki call maaro
        leftView(root->left,level,v);
        //right ki call maaro
        leftView(root->right,level,v);
    }
    int main(){
        Node* root = createTree();
        levelOrderTraversal(root);
        int level = 0;
        vector<int>v;
        leftView(root,level,v);
        cout<<"printing the left view:";
        for(int i =0;i<v.size();i++){
            cout<<v[i]<<" ";
        }
        return 0;
    }