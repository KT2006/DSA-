#include<iostream>
using namespace std; 
void findMax(int arr[],int size,int index,int &maxi){
    if(index >= size) return;
    maxi = max(arr[index],maxi);
    findMax(arr,size,index+1,maxi);
}
// void findMax(int arr[],int size,int index, int &maxi){
//     if(index >= size) return;
//     if(arr[index] > maxi) {
//         maxi = arr[index];
//     }
//     findMax(arr,size,index+1,maxi);
// }
int main() {
    int arr[] = {12998877,3124,234523,1234,235553,234,100000087};
    int index = 0;
    int size  = 7;
    int maxi = INT_MIN;
    findMax(arr,size,index,maxi);
    cout<<"The maximum number in the array is:"<<maxi<<endl;
     return 0;
}