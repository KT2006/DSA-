#include<iostream>
using namespace std;

void pointerPrinting(int arr[],int size){
    if(size == 0) return;

    cout<<*arr<<endl;
    pointerPrinting(arr+1, size-1);
}

int main(){
    int arr[]= {10,20,30,40,50,60,70,80};
    int size = 8;

    pointerPrinting(arr,size);

    return 0;
}