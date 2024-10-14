//you've to solve this using sliding window method     
#include<iostream>
#include<deque>
using namespace std;
void firstNegative(int *arr,int n, int k){
    //dequeue banao
    deque<int>dq;
    //process first k elements - first window
    for(int index = 0; index<k; index++){//we're iterating through the window and checking for negative elements and if we find any then we are pushing it's index into deque
        int element = arr[index];
        if(element<0){
            dq.push_back(index);
        }
    }
    //process remaining windows - Removal and Addition
    for(int index = k;index<n;index++){
        //aage badne se pehle  purani window ka answer nikal do
        if(dq.empty()){
            cout<<"0 "<<endl;
        }
        else{
            cout<<arr[dq.front()]<<" ";
        } 
        //Removal - jo bhi index out of range h usko queue m se remove krdo
        if(index - dq.front()>=k){
            dq.pop_front();
        }
        //Addition
        if(arr[index]<0){
            dq.push_back(index);
        }
       
    }
     //iss format se krne par u won't be able to print last window ka ans
        //so usko alag se print kro
        if(dq.empty()){
            cout<<"0 "<<endl;
        }
        else{
            cout<<arr[dq.front()]<<" ";
        }
}
int main(){
    int arr[] = {2,-5,4,-1,-2,0,5};
    int size = 7;
    int k =3;
    firstNegative(arr,size,k);
    // deque<int>dq;
    // dq.push_back(2);
    // dq.push_back(-5);
    // dq.push_back(4);
    // dq.push_back(-1);
    // dq.push_back(-2);
    // dq.push_back(0);
    // dq.push_back(5);
    return 0;
}