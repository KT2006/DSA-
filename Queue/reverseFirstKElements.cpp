#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void printQueue(queue<int>q) {
    while (!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}
void reverseK(queue<int>&q,int k) {
    stack<int>st;
    int size = q.size()-k;
    //check kro ki queue m k elements h bhi ya nhi
    if(k>size||k==0) { 
        cout<<"No k elements in Queue..."<<endl;
        return;
    }
    //push first k elements into stack
    for(int i=0;i<k;i++) {
        int temp = q.front();
        q.pop();
        st.push(temp);
    }


    //push all k elements from stack to queue
    while (!st.empty()) {
        int temp = st.top();
        st.pop();
        q.push(temp);
    }
    //pop and push first (n-k) elements into queue again
    while(size!=0) {
        int elem = q.front();
        q.pop();
        q.push(elem);
        size--;
    }
}
int main() {
    queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    q.push(70);
    printQueue(q);
    cout<<endl;
    reverseK(q,10);
    printQueue(q);

    return 0;
}