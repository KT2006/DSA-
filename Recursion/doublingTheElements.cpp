#include<iostream>
using namespace std;
 
 void doublingTheArray(int arr[],int size,int index){
    if(index >= size) return;
    arr[index] = 2 * arr[index];
    cout<<arr[index]<<" ";
    doublingTheArray(arr,size,index+1);
 }
 int main(){
     int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int size = 10;
    int index = 0;
    doublingTheArray(arr,size,index);
    return 0;
 }