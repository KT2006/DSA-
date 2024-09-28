#include <iostream>
using namespace std;

int firstOccurence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start +(end - start )/2;
    int ans = -1;
    while(start <= end ){
        if(arr[mid]==target){
            ans = mid;
            end = mid-1;
        }
        else if(target > arr[mid]){
            //right jaao
            start = mid +1;
        }
        else if (target < arr[mid]){
             end = mid-1;

        }
     mid = start +(end - start )/2;

    }
    return ans;
}
int lastOccurence(int arr[],int n, int target){
    int start = 0;
    int end = n-1;
    int mid = start +(end - start )/2;
    int ans = -1;
    while(start <= end ){
        if(arr[mid]==target){
            ans = mid;
            start = mid +1;
        }
        else if(target > arr[mid]){
            //right jaao
            start = mid +1;
        }
        else if (target < arr[mid]){
             end = mid-1;

        }
     mid = start +(end - start )/2;

    }
    return ans;
}
int totalOccurence(int arr[],int n,int target){
    int first = firstOccurence(arr,n,target);
    int last = lastOccurence(arr,n,target);
    int total = last - first+1;
    return total;
}

int main(){
    int arr[]={10,20,30,40,50,50,50,60,70,80,90,100};
    int n = 11;
    int target = 50;
    int ans = totalOccurence(arr,n, target);
    cout<<"The total no. of occurences : "<<ans<<endl;
}