#include<iostream>
using namespace std;
int binarySearch(int arr[],int start,int end,int target){
   if(start > end ) return -1;
   int mid = start + end - start /2;
   if(arr[mid] == target) return mid;
   if(target > arr[mid]) {
    int start = mid + 1;
   int ans =  binarySearch(arr,start,end,target);
    return ans;
   }
   else{
    int end = mid-1;
    int ans = binarySearch(arr,start,end,target);
    return ans; 
   }
}
int main(){
      int arr[] = {10,20,30,40,50,60,70};
    int size = 7;
    int index =1;
    int finalAns = binarySearch(arr,0,size-1,30);
    cout<<"Element is found at the index: "<<finalAns<<endl;
    return 0;
}