//finding middle of a linked list
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
    int count = 0;
    while(temp!=NULL){
        count++;
        temp = temp->next;

    }
    return count;
}
void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }

}
void insertAtHead(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        newNode->next = head;
        head = newNode;

    }
    }
void insertAtTail(Node* &head,Node* &tail,int data){
    Node* newNode = new Node(data);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    else{
        tail->next = newNode;
        tail  = newNode;
    }
}
void insertAtAnyPos(Node* &head, Node* &tail,int data,int position){
    int length = getLength(head);
    if(position == 1) insertAtHead(head,tail,data);
    else if(position == length+1) insertAtTail(head,tail,data); 
    else{
        Node* prevNode = NULL;
        Node* currNode = head;
        Node* newNode  = new Node(data);
        while(position != 1){
            prevNode = currNode;
            currNode = currNode->next;
        }
        prevNode->next = newNode;
        newNode->next = currNode;
    }
}
void printingMiddle(Node* &head){
    Node* temp = head;
    int length = getLength(head);
    int mid = (length / 2) +1;
    while(mid != 1){
        temp = temp->next;
        mid--;
    }
    cout<<endl<<temp->data<<endl;
}
int main(){
    cout<<endl<<"PRINTING MIDDLE OF A LIST"<<endl;
    Node* head = NULL;
    Node* tail = NULL;
    insertAtAnyPos(head,tail,10,1);
    insertAtAnyPos(head,tail,20,2);
    insertAtAnyPos(head,tail,30,3);
    insertAtAnyPos(head,tail,40,4);
    insertAtAnyPos(head,tail,50,5);
    insertAtAnyPos(head,tail,60,6);
    printLL(head);
    printingMiddle(head);
    return 0;
}