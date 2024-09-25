// REVERSE A LINKED LIST  
//question m naya head return krne ko bola tha toh maine prev return kr diya 
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
        this->data = data;
        this->next = NULL;
    }
};  
int getLength(Node* &head){
    Node* temp = head;
    int count= 0;
    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}
void printLL(Node* &head){
    Node* temp = head;
    while(temp!= NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}
void insertAtHead(Node* &head,Node* &tail, int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head= newNode;
    }
}
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = tail = newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail = newNode;
    }
}
void insertAtAnyPos(Node* &head, Node* &tail,int data,int position){
    int length = getLength(head);
    if(position == 1){
        insertAtHead(head,tail,data);
    }
    else if(position == length+1){
        insertAtTail(head,tail,data);
    }
    else{
    Node* newNode = new Node(data);
    Node* prevNode = NULL;
    Node* currNode = head;
    while(position !=1){
        prevNode = currNode;
        currNode = currNode->next;
    }
    prevNode->next = newNode;
    newNode->next = currNode;
    }
}
void reverseLL(Node* &head){
    Node* prevNode = NULL;
    Node* currNode = head;
    while(currNode != NULL){
        Node* track = currNode->next;
        currNode->next = prevNode;
        prevNode = currNode;
        currNode= track;
    }
    head = prevNode;
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    insertAtAnyPos(head,tail,10,1);
    insertAtAnyPos(head,tail,20,2);
    insertAtAnyPos(head,tail,30,3);
    insertAtAnyPos(head,tail,40,4);
    insertAtAnyPos(head,tail,50,5);
    insertAtAnyPos(head,tail,60,6);
    printLL(head);
    reverseLL(head);
    printLL(head);

    return 0;
}