#include<iostream>
using namespace std;

int lastOccurence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int ans = -1;
    int mid = start + (end-start)/2;
    while(start <= end){
        if(arr[mid]==target){
            //last ocurence k liye right m jaao
            ans = mid;
            start = mid +1;

        }
        else if (target > arr[mid]){
            //right jaao
            start = mid +1;
        }
        else if (target < arr[mid]){
            end = mid -1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){

    int arr[]={10,20,30,40,50,50,50,60,70,80,90,100};
    int n = 11;
    int target = 50;
    int ansIndex = lastOccurence(arr,n,target);
    if(ansIndex ==-1){
        cout<<"TARGET NOT FOUND"<<endl;
    }
    else{
        cout<<"TARGET FOUND:"<<ansIndex<<endl;
    }
    return 0;
}