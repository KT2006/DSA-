// here all elements will occur even number of times except one which will occur odd no.of times
// you can solve this question by using XOR operator but it will take O(n) complexity 
//the elements occuring in even numbers are occuring in the form of pairs and pairs are not repeated
// ek baar m koi bhi number 2 baar se jyada nhi aata h

#include<iostream>
using namespace std;

int findOddOccuringElement(int arr[],int n){
    int start = 0;
    int end  = n-1;
    int mid = start + (end - start )/2;
    while(start <= end){
        //single element wala case h yeh
        if(start == end){
            return start;
        }
        // mid check -> even or odd
       
     else if(mid & 1) //mid & 1 returns boolean value if the ans is true it means that u are on a odd number, this is the fastest way to check odd or even 
        {
            //odd wala case
            if(mid - 1 >=0 && arr[mid] == arr[mid-1]){
                //right m jaao
                start = mid +1;
            }
            else {
                //left m jaao 
                end = mid-1;
            }
        }
        else{
        // if the index is even
        if(mid +1 <= n && arr[mid] == arr[mid+1]){
            //right m jaao but mid wala mid+1 se already compare ho chuka h so u can skip that elem
            start = mid + 2;
        }
        else{
            //yaa toh m right part p khada hu 
            // ya toh m ans p khada hu isiliye e = mid; kr rha hu warna e = mid-1; se answer lost ho skta h
            end = mid;
        }
    }
    mid = start + (end - start)/2;
    }
    
    return -1;
    
}

int main(){

    int arr[] = {2,5,5 ,20,20};
    int n = 11;
    
    int ans = findOddOccuringElement(arr,n);

    if(ans == -1){
        cout<<"NO ODD OCCURING ELEMENT FOUND"<<endl;

    }
    else{
        cout<<"THE ODD OCCURING ELEMENT IS AT INDEX :"<<ans<<endl;
        cout<<"AND THE ELEMENT IS:"<<arr[ans]<<endl;
    }
}