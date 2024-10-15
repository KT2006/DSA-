#include<iostream>
#include<stack>
#include <queue>
using namespace std;
void print(queue<int>q) {
    while (!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}
void reverseQueue(queue<int> &q) {
    stack<int>st;
    while (!q.empty()) {
        st.push(q.front());
        q.pop();
    }
    //abhi one by one queue m daalo
    while(!st.empty()) {
        q.push(st.top());
        st.pop();
    }
}
int main() {
    queue<int> q;
    stack<int>st;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    print(q);
    cout<<endl;
    reverseQueue(q);
    print(q);
    return 0;
}