#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int>st;
    //inserting elements into stack
    st.push(50);
    st.push(40);
    st.push(30);
    st.push(20);
    st.push(10);
    //checking if the stack is empty
    if(st.empty()){
        cout<<"The stack is empty"<<endl;
    }
    else{
        cout<<"The stack is not empty"<<endl;
    }
    //printing the size of the stack
    cout<<"The size of the stack is:"<<st.size()<<endl;
    //removing one element from the stack
    st.pop();
    // printing the top most element
    cout<<"the top most element of the stack is:"<<st.top()<<endl; //(since we removed 10 using pop this should print 20)
    return 0;
}