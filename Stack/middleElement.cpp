#include<iostream>
#include<stack>
using namespace std;
void solve(stack<int> &st, int &position,int &ans){
    //asli logic yaha likhoge
    if(position == 1){//iska mtlb aap middle element pe pohonch gye ho
       st.pop();//yeh delete  middle element wala case h
       // ans = st.top();// yaha pe we are storing the middle element but if we want to delete it just pop it
        return;
    }
    // 1 case jo ham solve karenge 
    position--;
    int temp = st.top();
    st.pop();
    
    //recursion ko call kro
    solve(st,position,ans);
    //backtrack
    st.push(temp);
}
int getMiddleElem(stack<int> &st){
    int size = st.size();
    if(st.empty()){
        //return -1; //ham check kr rhe h ki agar stack empty h toh minus 1 return k rhe h
        cout<<"STACK IS EMPTY"<<endl;
        return 0; 
    }
    else{
        //stack is not empty size check kro even h ya odd h aur position nikalo
        int position =0;
        if(size & 1){// size & 1 is the fastest way to find check "ODD" wala condition
            position = size /2 +1;
        }
        else{
            position = size /2;
        }
        int ans = -1;
         solve(st,position,ans);
        return ans;
    }
}
void display(stack<int> &st){
    for(int i=0;i<st.size();i++){
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<endl;
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);

    display(st);//middle wale ke pehle elements hi print hoge us se
    int middleElem = getMiddleElem(st);
    cout<<"Middle Element is:"<<middleElem<<endl;
    return 0;
}