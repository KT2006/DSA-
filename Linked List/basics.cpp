#include<iostream>
using namespace std;
class Node{
    public:
    int data; // data store krne k liye variable 
    Node* next;//pointer jo agle NODE ko point karega
    Node(){
        cout<<endl<<"I'm inside the DEFAULT constructor"<<endl;
        this->next = NULL;
    }
    Node(int data){
        // cout<<endl<<"I'm inside parametric constructor"<<endl;
        this->data = data;
        this->next = NULL;
    }
};

void printLL(Node* head){
    //kabhi bhi originally passed pointer m changes nahi kroge , temp bana lo ek
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp=temp->next;  
    }
    cout<<endl;
}
//function to count no.of nodes in a LL
void noOfNodes(Node* head){
    Node* temp = head;
    int count = 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    cout<<endl<<"The total no.of nodes in LL :" <<count<<endl;
}
// function to insert a new nodea at the beginning
void insertAtHead(Node* &head,Node* &tail,int data){ //VVVIMP head ko pass by value nhi pass by reference kro that is & add kro
   if(head == NULL){//empty LL wala case
    //create a node 
    Node* newNode = new Node(data);
    //head ko update krdo
    head = newNode;
    //tail ko bhi update kro
    tail = newNode;
   }
   
   else{
    // NON-EMPTY LL

    // create a new node 
    Node* newNode = new Node(data);
    //naye node ke pointer ko head pe point karao
    newNode->next = head;
    //new node ko head banao (update head)
    head = newNode;
}
   }
   
   void insertAtTail(Node* &head, Node* &tail, int data){
    if(head == NULL){
        //EMPTY LL 
        // step 1: pehle ek node bana toh lo
        Node* newNode = new Node(data);
        //step 2: single LL wala case banega data add hone ke baad so head aur tail ko same node pe point krwao
        head = newNode;
        tail = newNode;
    }
    else{
        //normal case
        // step 1: create a node
        Node* newNode = new Node(data);
        // step 2: tail ke pointer ko naye node pe point krao
        tail->next = newNode;
        // step 3: tail ko update kro
        tail = newNode;
    }
   }
   
int main()
 {
    Node* head = NULL;
    Node* tail = NULL;

    insertAtHead(head,tail,30);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,690);
    insertAtTail(head,tail,123);
    insertAtTail(head,tail,234);
    printLL(head);









//     // Node a; //static allocation h toh consturctor call hoga hi hoga
//     // Node* head = new Node(); // dynamic allocation h phr bhi constructor call hoga
//     Node* first = new Node(10);
//     Node* second = new Node(20);
//     Node* third = new Node(30);
//     Node* fourth = new Node(40);
//     Node* fifth = new Node(50);

//     first->next = second;
//     second->next = third;
//     third->next = fourth; 
//     fourth->next = fifth;


//     cout<<"Linked List create ho chuki h"<<endl;
//     // chalo ek head banate h

//     Node* head  = first; // head banaya aur first ko head maan liya
//     Node* tail = fifth;
//     printLL(head);
//     // noOfNodes(head);
//     // insertAtHead(head,tail,5);
//     insertAtTail(head,tail,500);
//     printLL(head);
    return 0;
}