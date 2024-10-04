#include<iostream>
using namespace std;
class Stack{
    public:
    int *arr;
    int size;
    int top1;
    int top2;
    Stack(int size){
        arr = new int[size];
        this->size = size;
        this->top1 = -1;
        this->top2 = size;
    }
    void push1(int data){
        if(top2 - top1 == 1){
            cout<<"STACK OVERFLOW"<<endl;
            return;
        }
        else{
            top1++;
            arr[top1] = data;
        }
        }
        void push2(int data){
            if(top2 - top1 == 1){
                cout<<"STACK OVERFLOW"<<endl;
                return;
            }
            else{
                top2--;
                arr[top2] = data;
            }
        }
        void pop1(){
            if(top1 == -1){
                cout<<"STACK UNDERFLOW"<<endl;
                return;
            }
            else{
                arr[top1] = 0;
                top1--;
            }
        }
        void pop2(){
            if(top2 == size){
                cout<<"STACK UNDERFLOW"<<endl;
                return;
            }
            else{
                arr[top2] = 0;
                top2++;
            }
        }
 
   void display(){
       for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
       }
       cout<<endl;
    }
};
int main(){
    Stack st(10);
    st.push1(1);
    st.push1(2);
    st.push1(3);
    st.push1(4);
    st.push1(5);
    st.push2(10);
    st.push2(9);
    st.push2(8);
    st.push2(7);
    st.push2(6);
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop1();
    st.pop2();
    st.pop2();

    st.pop1();

    st.display(); 

    return 0;
}