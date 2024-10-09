#include<iostream>
using namespace std;
void printArrayReverse(int arr[],int n){
    //base case
    if(n == 0) {
        cout<<arr[n]<<endl;
        return; 
        }
    cout<< arr[n] << endl;
    printArrayReverse(arr,n-1);
    //let's try iska ulta
}
//normal printing
void printArray(int arr[], int n,int index){
    //base case

    if(index == n) {
        return;
    }
    cout<<arr[index]<<endl;
    printArray(arr,n,index+1);
}
int main(){
    int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    printArrayReverse(arr,size);
    printArray(arr,size,0);
    return 0;
}