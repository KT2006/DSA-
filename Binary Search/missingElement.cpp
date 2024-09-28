//jab tk missing element nhi aaya tab tk pattern chalega, jaise hi missing element aayega pattern break ho jaayega
#include<iostream>
using namespace std;

int missingElem(int arr[],int n){
    int start = 0;
    int end= n-1;
    int mid = start+(end - start )/2;
    int ans =-1;
    while(start<=end){
        if(arr[mid] - mid ==1){
            //since the pattern is being followed right jaao
            start = mid +1;
        }
        else{
            ans = mid;
            end = mid-1;
        }
        mid = start + (end - start)/2;
    }
    if(ans+1 ==0){
        return n+1;
    }
    return ans+1;
}
int main(){
    int arr[]= {1,2,3,4,5,6,7,8,9,10,12,13};
    int n = 11;
    int ans = missingElem(arr,n);
    cout<<"The missing element is :"<<ans;
}
