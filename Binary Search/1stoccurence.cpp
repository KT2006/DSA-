#include<iostream>
using namespace std;

int firstOccurence(int arr[],int n,int target){
    int start = 0;
    int end = n-1;
    //yaha mid find karte time integer overflow hone ki sambhavna h so we better change the approach
    // int mid = (start+end)/2;//iss se overflow hoga
    // int mid = start/2 + end/2;//Alternative method 
    int mid = start + (end - start)/2; // BEST PRACTICE
    int ans = -1;
    while (start<=end)
    {
        if(arr[mid]==target){
            //then answer ko store kar do
            ans = mid;
            //first occurence dhund ne ke liye left m jaao
            end = mid -1;

        }
        if(arr[mid]<target){
            start = mid+1;
        }
        if(target<arr[mid]){
            end= mid-1;
        }
        mid = (start+end)/2;
    }
    return ans;
    
}
int main(){

    int arr[]={10,20,30,40,50,50,50,60,70,80,90,100};
    int n = 11;
    int target = 50;
    int ansIndex = firstOccurence(arr,n,target);
    if(ansIndex ==-1){
        cout<<"TARGET NOT FOUND"<<endl;
    }
    else{
        cout<<"TARGET FOUND:"<<ansIndex<<endl;
    }
    return 0;
}
