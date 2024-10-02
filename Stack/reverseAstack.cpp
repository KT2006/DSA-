//time-complexity = O(N);
#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int> &st, int &element){
    //base case
    if(st.empty()){
        st.push(element);
        return;
    }
    //1 case m solve krunga
    int temp = st.top();
    st.pop();

    //baaki recursion sambhal lega
    insertAtBottom(st,element);

    //backtrack
    st.push(temp);
}
void reverseStack(stack<int> &st){
    //base case
    if(st.empty()){
        return;
    }
    //1 case m solve krunga
    int temp = st.top();
    st.pop();
    
    //recursion ko call krunga 
    reverseStack(st);
    //backtracking se usko insert at bottom krdunga

    insertAtBottom(st,temp);
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    int element = 400;

    insertAtBottom(st,element);
    reverseStack(st);
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;
}