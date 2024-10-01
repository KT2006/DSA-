//concept related to leetcode - QUESTION NO.33 (SEARCH IN ROTATED AND SORTED ARRAY)
//pivot element ya index ko bht jagah smallest element maana jaata h and bht jagah largest element of an array maana jaata h
//we will consider it as largest and try to find it
//the array given here will be sorted and rotated and the graph of this array varies from the the graph of the peak element array

#include<iostream>
using namespace std;

int pivotElement(int arr[],int n){
    int start = 0;
    int end = n-1;
    int mid = start+(end-start)/2;
    while (start<=end)
    { 
        if(start==end){
        return arr[start];
    }
    else if(arr[mid]<arr[mid-1]) {
        return arr[mid-1];
    }
    else if(arr[mid]>arr[mid+1]){
        return arr[mid];
    }
    else if(arr[start]>arr[mid]){
        //move left
        end = mid-1;
    }
    else{
        //answer must be in the right side so move right
        start= mid+1;
    }
    mid = start+(end-start)/2;
    }
    return -1;
    
}

int main(){
    int arr[] = {12,14,16,18,20,2,4,6,8,10};
    int n = 10;
    int ansIndex = pivotElement(arr,n);
    cout<<"the pivot element is:"<<ansIndex<<endl;
}