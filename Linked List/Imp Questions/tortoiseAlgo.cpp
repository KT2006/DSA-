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
   //single path m middle find out krenge without using getLength function
   Node* slow = head;
   Node* fast = head;
   while(fast!=NULL){
    fast = fast->next;
    if(fast!=NULL){
        fast = fast->next;
        //abhi fast ne do kadam chal liye h slow ko ek kadam chalwao
    slow = slow->next;          
    }
    //agar tumko middle node return krna h toh yaha function ka return type badal do and then node ko return kro
    // ya agar tumko bas middle ki value find krni h toh slow ko return kro
   }
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