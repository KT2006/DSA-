#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr; // pointer variable liya kyunki dynamic array bana rhe h and there's only one way to make a dynamic array in cpp
    int size;
    int top;
    Stack(int size){
        //parametric constructor se values initialise kro
        arr = new int[size];
        this->size = size;
        this->top = -1;
    }
    void push(int data){
        if(top == size-1){
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        else{
            top++;
            arr[top] = data;
        }
    }
    void pop(){//stack m agar elements hi nhi h toh woh empty hogi aur empty stack m se print krne ki koshish kroge toh UNDERFLOW kehlaayega
        //bs top wale pointer ko peeche move kro
        if(top == -1){
            cout<<"STACK UNDERFLOW "<<endl;
            return;
        }
       else{
         top--;
       }
    }
    bool isEmpty(){
        if(top == -1) return true;
        else return false;
    }
    int getTop(){//check krna ki element exist bhi krta h ya nahi
    if(top == -1) {
        cout<<"Stack is EMPTY"<<endl;
        return 0;
    }
       else return arr[top]; 
    }
    int getsize(){
        return top+1;
    }
    //stack m print ki functionality hoti nhi but let's create ki taaki hamko dikhe 
    void print(){
        cout<<"Current Top:"<<top<<endl;
        cout<<"Top element:"<<arr[top]<<endl;
        cout<<"Stack:"<<endl;
        for(int i =0;i<getsize();i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl<<endl;
    }
};
int main(){
    //creation ke waqt don't forget to pass size kyunki hamne bas parametric constructor create kra h
    Stack st(8);
    
    st.push(30);
    st.print();
    st.push(20);
    st.print();
    st.push(10);
    st.print();
    return 0;
}