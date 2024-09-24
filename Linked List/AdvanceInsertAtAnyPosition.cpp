#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(){
        this->next = NULL;
    }
    Node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};
int getLength(Node* &head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
// void search(Node* &head,int target){
//     Node* temp = head;
//     for(int i = 0;i< getLength(head);i++){
//         if(temp->data == target){
//             cout<<"The target is present in the LL at index:"<<i<<endl;
//         }
//         temp = temp->next;
//     }
//     cout<<"TARGET NOT FOUND"<<endl;
// }
void search(Node* &head, int target) {
    Node* temp = head;
    int index = 0;
    
    while(temp != NULL) {
        if(temp->data == target) {
            cout << "The target is present in the LL at index: " << index << endl;
            return; // Exit after finding the target
        }
        temp = temp->next;
        index++;
    }
    
    cout << "The target is not present in the LL." << endl;
}
void printLL(Node* head ){
    Node* temp= head;
    while (temp != NULL)
    {   cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}


void insertAtHead(Node* &head, Node* &tail,int data){
   if(head == NULL){
    Node* newNode = new Node(data);
    head = newNode;
    tail = newNode;
    return;// yaha pe galti kari thi hamesha yaad rkhna return likhna
   }
   else{
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;

   }
}
void insertAtTail(Node* &head, Node* &tail,int data){
    if(head == NULL) {
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
    return;// yaha pe galti kari thi hamesha yaad rkhna return likhna
    }
    else{
        Node* newNode = new Node(data);
        tail->next = newNode;
        tail = newNode;
    }
}
//yaha h insertion at any position wala code
void insertAtPos(Node* &head, Node* &tail,int data,int position){
    //assumption: position ki value [ 1 -> length+1 ]
    //length nikalo (no.of nodes)
    int length = getLength(head);
    if(position <= 1) {
        //position less than = 1 ho shuruwat m laga do, yaha ham <1 m error throw kr skte the but hamne nhi kiya
        insertAtHead(head,tail,data);
    }
    else if(position > length){
        //matlab koi bhhi random position ho aur kitni bhi padi ho position woh last m aake hi lagega
        insertAtTail(head,tail,data);
    }
    else{
        //insert at the middle of a LL
        // step 1: create a new node
        Node* newNode = new Node(data);
        //step 2: traverse prev // curr to position
        Node* prev = NULL;
        Node* curr = head;
        while(position != 1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        // step 3: attach prev node to newnode
        prev->next = newNode;
        //step 4: newnode ko curr node se attach kro
        newNode->next = curr;
    }
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,30);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,690);
    insertAtTail(head,tail,123);
    insertAtTail(head,tail,234);
    insertAtPos(head,tail,100000,-3);
    insertAtPos(head,tail,100000,-3);
    insertAtPos(head,tail,2050,31);
    printLL(head);
    search(head,30);
    cout<<"The length of the LL:"<<getLength(head)<<endl;

    return 0;
}