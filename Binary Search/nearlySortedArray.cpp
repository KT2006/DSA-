//Nearly sorted array m aapka element i-1, i, aur i+1 index m kahi bhi ho skta h but SORTED ARRRAY m i-th index m hi milega 
// yaha bas do conditions extra add ho jaati h 
#include<iostream>
using namespace std;

int nearlySortedArray(int arr[],int n,int target){
    int start = 0;
    int end =n-1;
    int mid = start + (end - start )/2;
    while(start <= end ){
        if(arr[mid] == target){
            return mid;
        }
        //yaha pe mid+1 array ke bahar chala jaa skta h isliye boundary condition lagao
        else if(mid+1 < n &&arr[mid+1] == target){
            return mid+1;
        }
        //yaha par mid-1 ke valid index naa hone ki sambhavna h soo condition lagao
        else if(mid-1 >= 0 && arr[mid-1] == target){
            return mid-1;
        }
        else if(target > arr[mid]){
            //move right 
            // yaha mid+2 krna padega cause same element baar baar check ho rha h
            start = mid+2;
            //yaha pe galti karunga
        }
        else{
        //move left
        //dry run krke dekhna tab smjh aayega gi same element baar baar check ho rha h 
        // mid-1 wla regular code bhi chalega
        end = mid -2;
        //yaha pe bhi galti karunga
        }
        mid = start + (end - start )/2;
    }
    return -1;
}

int main(){
    //kshitij totawar naam ke bande se dur rha karo behen ka loda bada pareshan krte rehta h
    int arr[]={ 20,10,30,50,40,70,60  };
    int n = 7;
    int target = 60;
    int ansIndex = nearlySortedArray(arr,n,target);
   if(ansIndex == -1){
    cout<<"ELEMENT NOT FOUND"<<endl;
   }
   else{
    cout<<"ELEMENT FOUND AT INDEX:"<<ansIndex<<endl;
   }
}