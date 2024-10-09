#include<iostream>
using namespace std;

void printArray(int arr[],int size,int index){
    if(index >=  size ) return;
    cout<<arr[index]<<" ";//iss line ko printArray ke neeche place krne se bhi reverse order m values print ho jayegi cause pehle call jaate rhega jab tk base condn false nhi hota jab false ho jaayega toh tab waha se print hona chaalu hoga
    printArray(arr,size,index+1);
}
void reversePrint(int *arr, int size){
    if(size <= 0) return;
    reversePrint(arr,size-1);
    cout<<arr[size-1]<<endl;
}
int main(){
    int arr[] = {100,200,300,400,500,600,700};
    int size = 7;
    int index = 0;
    // printArray(arr,size,index);
    reversePrint(arr,size);

    return 0;
}