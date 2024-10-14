#include<iostream>
#include<queue>
using namespace std;
void printQueue(queue<int>q) {
        cout<<"Elements in the Queue:";
    while(!q.empty()) {
        cout<<q.front()<<" ";
        q.pop();
    }
}
void interleaveQueue(queue<int> &first) {
    queue<int>second;
    int mid = first.size()/2;
    while(mid!=0) {
        int elem = first.front();
        first.pop();
        second.push(elem);
        mid--;
    }
    while(!second.empty()) {
        int temp = second.front();
        second.pop();
        first.push(temp);
        int rePushElem = first.front();
        first.pop();
        first.push(rePushElem);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // q.push(70);
    // q.push(8 0);
    printQueue(q);
    cout<<endl<<"After calling the interleaving function"<<endl;
    interleaveQueue(q);
    printQueue(q);
  return 0;
  }