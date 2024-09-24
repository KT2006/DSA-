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
        this->next = NULL;
        this->data = data;
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
void printLL(Node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<endl;
}
void insertAtHead(Node* &head,Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    newNode->next =  head;
    head = newNode;
}
void insertAtTail(Node* &head, Node* &tail,int data){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node* newNode = new Node(data);
    tail->next = newNode;
    tail= newNode;
}
void insertAtPos(Node* &head, Node* &tail,int data,int position){
    int length = getLength(head);
    if(position>length+1 || position<1){
        cout<<"Enter a valid position"<<endl;
        return;
    }
    else if(position == 1){
        insertAtHead(head,tail,data);
    }
    else if(position == length+1){
        insertAtTail(head,tail,data);
    }
    else{
        Node* newNode = new Node(data);
        Node* prev = NULL;
        Node* curr = head;
        while(position!=1){
            prev = curr;
            curr = curr->next;
            position--;
        }
        prev->next = newNode;
        newNode->next = curr;
    }
}
void deleteNode(Node* &head,Node* &tail,int position){
    int length = getLength(head);
    if(head == tail){
        //single element wala case ho gya
        Node* temp = head;
         delete temp;
        head = NULL;
        tail = NULL;
    }
   else if(position == 1){
        //head se delete karo
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
       
    }
      else if(position == length){
            //tail wali node delete karo
            Node* prev = head;
            while(prev->next != tail){//jab tk previous ka next null nhi hota tab tk iterate kro nodes ko
                prev = prev->next;
            }
            prev->next= NULL;
            delete tail;
            tail = prev;

        }
        else{
            //middle m koi node delete krna h
            Node* prev = NULL;
            Node* curr = head;
            while(position!=1){
                prev = curr;
                curr= curr->next;
                position--;
            }
            prev->next = curr->next;
            curr->next = NULL;
            delete curr; 

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
    insertAtPos(head,tail,100000,4);
    insertAtPos(head,tail,100000,3);
    insertAtPos(head,tail,2050,5);
    printLL(head);
    deleteNode(head,tail,3);
    printLL(head);
    deleteNode(head,tail,1);
    printLL(head);
    int length = getLength(head);
    deleteNode(head,tail,6);
    printLL(head);

    return 0;
}