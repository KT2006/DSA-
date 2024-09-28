//iterative wala binary search is better than the recursive binary search
//4 type ke questions ismein bante h 
// -> clasical
// -> predicate function wale
// -> search space wale
// ->index observation wale
#include<iostream>
using namespace std;

int binarySearch(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
      //yaha mid find karte time integer overflow hone ki sambhavna h so we better change the approach
    // int mid = (start+end)/2;//iss se overflow hoga
    // int mid = start/2 + end/2;//Alternative method 
    int mid = start + (end - start)/2; // BEST PRACTICE
    while(start<=end){
        if(arr[mid]==target){
            return mid;
        }
        else if(target > arr[mid]){
            start = mid +1;
        }
        else if(target<arr[mid]){
            end = mid -1;
        }
        mid = (start+end)/2;
    }
    return -1;
}
int main(){
    int arr[]={10,20,30,40,50,60,70,80,90,100};
    int n = 10;
    int target = 100;
    int ansIndex = binarySearch(arr,n,target);
    if(ansIndex ==-1){
        cout<<"TARGET NOT FOUND"<<endl;
    }
    else{
        cout<<"TARGET FOUND:"<<ansIndex<<endl;
    }
    return 0;
}