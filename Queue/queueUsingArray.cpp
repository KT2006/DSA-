//yaha par har ek operation O(1) time complexity m ho jaayega 
#include<iostream>
using namespace std;
class Queue{
    public:
    int *arr;
    int size;
    int front;
    int rear;
    Queue(int size){
        arr = new int [size];
        this->front = -1;
        this->rear = -1; 
        this->size = size;
    }
    void push(int data){
        //empty wala case
        if(front == -1 && rear == -1){
            front++;
            rear++;
            arr[rear] = data;
        }
        else if(rear == size-1){
            //queue full wali condition
            cout<<"QUEUE IS FULL PUSHING NOT POSSIBLE"<<endl;
            return;
        }
        else{
            //normal condition
            rear++;
            arr[rear] = data;
        }
    }
    void  pop(){
        //single element wala case
        if(front == rear){
            //rear m bhi -1 daal de taaki pata chale ki rear se element hamne hataya h
            arr[rear] = -1; 
            front = -1;
            rear = -1;
        }
        //stack empty wala case
        else if(front == -1 && rear == -1){
            cout<<"Stack is empty cannot pop"<<endl;
            return;
        }
        else{
            //normal case 
            arr[front] = -1;
            front++;
        }
    }
    bool isempty(){
        if(front == -1 && rear== -1){
            return true;
        }
        else return false;
    }
    int getsize(){
        //emtpy wale m apna formula fat jaayega
        if(front== -1 && rear == -1){
            return 0;
        }
        else
        return rear-front+1;//very important formula
    }
    int getfront(){
        if(front == -1) cout<<"No element in queue"<<endl;
        else return arr[front];
    }
    int getback(){
         if(rear == -1) cout<<"No element in queue"<<endl;
         else return arr[rear];
    }
    void print(){
        cout<<"Current elements in queue:";
        for(int i = 0; i<size; i++ ){
            cout<<arr[i]<<" <- ";
        }
        cout<<endl;
    }
};
int main(){
    Queue q(10);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(50);
    q.print();
    q.pop();
    q.pop();  
    q.pop();
    q.pop();
    q.print();
    q.getback();
    cout<<"the size of the queue is:"<<q.getsize()<<endl;
    cout<<"The font element of the queue is :"<<q.getfront()<<endl;
    cout<<"The back element of the queue is :"<<q.getback()<<endl;
    cout<<"empty check:"<<q.isempty()<<endl;
    q.print();
    return 0;
}