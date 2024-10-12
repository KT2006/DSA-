#include<iostream>
using namespace std;
void searchArray(int arr[],int size,int index,int target){
    if(index >= size) return;// see generally hamare array ka last index is size - 1, and agar size aur index == ho gya toh iska mtlb array ka pura iteration khtm ho gya
    if(arr[index] == target){
        cout<<"target found at index "<<index<<": "<<arr[index]<<endl;
    }
    searchArray(arr,size,index+1,target);
}
int main(){
    int arr[] = {123,42314,52523,11223,1000};
    int size = 5;
    int target = 11223;
    searchArray(arr,size,0,target);
    return 0;
}