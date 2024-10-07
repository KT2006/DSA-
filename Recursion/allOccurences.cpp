#include<iostream>
using namespace std;
 
 void doublingTheArray(int arr[],int size,int index,int target){
    if(index >= size) return;
    if(arr[index] == target){
        cout<<index<<" ";
    }
    doublingTheArray(arr,size,index+1,target);
 }
 int main(){
     int arr[] = {5,2,5,4,5,6,5,8,9,5};
    int size = 10;
    int index = 0;
    int target = 5;
    doublingTheArray(arr,size,index,target);
    return 0;
 }