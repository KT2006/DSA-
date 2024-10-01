//jab tk missing element nhi aaya tab tk pattern chalega, jaise hi missing element aayega pattern break ho jaayega
#include<iostream>
using namespace std;

int peakElement(int arr[],int n){
    int start = 0;
    int end= n-1;
    int mid = start+(end - start )/2;
    int ans =-1;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            //A wali line par hu and mujhe right m jaana hoga peak k liye
            start = mid +1;
        }
        else{
            //ya toh B wali line par hu ya peak par hu
          end = mid;
        }
        mid = start + (end - start)/2;
    }
    return start;
}
int main(){
    int arr[]= {1,2,3,4,5,4,3,2,1};
    int n = 9;
    int ans = peakElement(arr,n);
    cout<<"The peak element is :"<<ans;
}
