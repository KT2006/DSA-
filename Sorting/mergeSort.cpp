// Time Complexity :- O(n logn)
#include<iostream>
using namespace std;
void mergeArrays(int arr[],int start, int end){
    int mid = start + (end - start) / 2;
    //left aur right arrays ki size nikalo observation se
    // left -> mid - start + 1,     right -> end - mid
    int lenghtLeft = mid - start + 1;
    int lengthRight = end - mid;
    //abhi lengths pata h toh arrays create karlo

    int *left = new int[lenghtLeft];
    int *right = new int[lengthRight];
    //left aur right wali arrays m values insert karo

    int k = start; // pointer h jo original array m se values copy krne m madat karega
    //storing values in left array from original array
    for(int i = 0; i< lenghtLeft; i++){
        left[i] = arr[k];
        k++;
    }
    // storing values in right array from original array

    k = mid + 1;  // right array ki shuruwat hi yahi se hoti h so original array m jaake yaha se values utha ke right ke i-th index m store karenge
    for(int i = 0; i<lengthRight;i++){
        right[i] = arr[k];
        k++;
    }
    //abhi tak bas values copy hui h abhi actual merge ka logic aayega beta
    //jin arrays pe tum merge ka logic lga rhe ho woh already sorted h
    int leftIndex = 0;//left array pe traverse krne k liye
    int rightIndex = 0;//right array pe traverse krne k liye
    int mainArrayIndex = start; // yahi galti karte h log tum mat krna

    while(leftIndex < lenghtLeft && rightIndex < lengthRight){
        if(left[leftIndex] < right[rightIndex]){
            //left wala chota h toh left wale ko main array m push krdo
            arr[mainArrayIndex] = left[leftIndex];//koi naya array create nhi kiya hamne, ham bas original array ko hi overwrite kar rhe h
            mainArrayIndex++;
            leftIndex++;
        }
        else {
            //right wala chota hoga toh usko mainarray m push krdo
            arr[mainArrayIndex] = right[rightIndex];
            mainArrayIndex++;
            rightIndex++;
        }
    }

    //2 more cases banenge
    // case 1 -> left array khtm ho gya but right m elements abhi bache h
       while(rightIndex < lengthRight){
        //copy elements in main array
        arr[mainArrayIndex] = right[rightIndex];
        mainArrayIndex++;
        rightIndex++;
    }
    // case 2 -> right array khtm ho gya but left m abhi elements bache h
       while(leftIndex < lenghtLeft){
        //copy elements in main array
        arr[mainArrayIndex] = left[leftIndex];
        mainArrayIndex++;
        leftIndex++;
    }
    //one more step pending... heap memory allocate kri thi abhi usko delete kro

    delete[] left;
    delete[] right;
}
void mergeSort(int arr[],int start, int end){
    //base case
    //check invalid size or invalid arrray
    if(start > end) return;
    //return if the size of the array is 1
    if(start == end) return; //size 1 hoga toh start aur end dono same index pe point krenge
    //break kro
    int mid = start + (end - start) / 2;


    // recursive call kro
    //left array ka recursive call
    mergeSort(arr,start,mid);//beech wala uska end ho jaayega
    //right array ke liye recursive call
    mergeSort(arr,mid+1,end); // mid + 1 se leke end wala part right wala array ho gya
    //dono sorted arrays ko merge kardo

    mergeArrays(arr, start ,end);


}
int main(){
    int arr[] = {10,4,1,5,88,19};
    int size = 6;
    int start = 0;
    int end = size - 1;
     cout<<"\vBefore merge sort:"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    mergeSort(arr,start,end);
    cout<<"\vAfter merge sort:"<<endl;
    for(int i =0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}