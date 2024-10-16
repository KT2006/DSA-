#include<iostream>
using namespace std; 

    void quickSort(int arr[],int start,int end){
        //base case
        if(start >= end)return;
        int pivot = end;//hamesha last ko pivot maano
        int i = start -1;//i ko ek kadam peeche se initialise kar rhe h7
        int j = start;
        while( j < pivot){
            if(arr[j] < arr[pivot]){
                i++;
                swap(arr[i],arr[j]);
            }
            j++;
        }
        i++;// last step m pivot ko proper position m laane k liye
        swap(arr[i],arr[pivot]);// usko swap krke sahi position m laa diya
        //abhi recursive call kro
        quickSort(arr,start,i-1);//yeh left wale part ko sort kr dega
        quickSort(arr,i+1,end);//yeh pivot ke right wale part ko sort krdega
    }
int main(){
    int arr[] = {7,2,1,8,6,3,5,4};
    int start = 0;
    int end  = 8;
    cout<<"BEFORE SORTING:"<<endl;
    for(int i = 0;i<end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quickSort(arr,start,end);
    cout<<"AFTER SORTING:"<<endl;
    for(int i = 0;i<end;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}