#include<iostream>
using namespace std;

bool checkSorted(int arr[],int size,int index){
    //base case
    if(index >= size) return true;
    //processing
    if(arr[index] > arr[index - 1]){
        //condition true h toh aage ka check krna padega
        //aage ka recursion sambhal lega
        int ans = checkSorted(arr,size,index+1);
        return ans;
    }
    else return false;
}
int main(){
    int arr[] = {10,20,30,40,500,60,70};
    int size = 7;
    int index =1;
    bool isSorted = checkSorted(arr,size,index);

    if(isSorted){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"\v The array is NOT sorted \v "<<endl;
    }

    return 0;
}