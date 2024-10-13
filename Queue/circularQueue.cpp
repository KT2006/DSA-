#include <iostream>
using namespace  std;
class CircularQueue {
public:
    int *arr;
    int size;
    int front;
    int rear;
    CircularQueue(int size) {
        arr = new int[size];
        this->size = size;
        front =-1;
        rear = -1;
    }
    void push(int data) {
        //overflow condition check
        if((front == 0 && rear == size - 1)||(rear-front == -1)) {
            cout<<"Queue is full CANNOT push"<<endl;
        }
        //single element wala case
        else if(front==-1 && rear == -1) {
            front++;
            rear++;
            arr[rear] = data;
        }
        //circular nature wala case
        else if(rear==size-1 && front !=0) {
            rear =0;
            arr[rear] = data;
        }
        else {
            // if(front-rear == 1) {
            //     cout<<"Circular Queue is full"<<endl;
            //     return;
            // }
            //normal case
            rear++;
            arr[rear] = data;
        }
    }
    void pop() {
        //underflow wali condition
        if(front == -1 && rear == -1) {
            cout<<"Queue is Empty cannot pop"<<endl;
        }
        else if(front == rear) {
            //single element wala case
            arr[rear] = -1;
            front = -1;
            rear = -1;
        }
        //circular nature wala case
        else if(front == size-1) {
            //toh rear ko zero pe laao aur phr arr of rear m data insert karo
            arr[front]=-1;
            front =0;
        }
        else {
            //normal case
            arr[front]=-1;
            front++;
        }
    }
    int getSize() {
        if(front==-1 && rear == -1) {
            //empty wala case alag se handle krna padega
            return 0;
        }
        else {
            //apna formula lagao rear-front+1
            return rear-front+1;
        }
    }
    void print() {
        // int qsize = getSize();
        cout<<"Front:"<<front<<" "<<"Rear:"<<rear<<endl;

        cout<<"Current elements in Queue:";
        for(int i =0;i<size;i++) {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }


};
int main() {
    CircularQueue q(5);
    q.push(10);
    q.print();
    q.push(20);
    q.print();

    q.push(30);
    q.print();

    q.push(40);
    q.print();

    q.push(50);
    q.print();
    // q.print();
    q.pop();
    q.print();

    q.pop();
    q.print();
    q.push(60);
    q.print();

    q.push(70);
    q.print();

    q.push(100);
    q.print();

    q.pop();
    q.print();

    q.pop();
    q.print();

    q.push(600);
    q.print();

    q.push(700);
    q.print();

    return 0;
}