// yaha pe swapping nhi shifting hogi
// yaha pe bhi total n-1 iterations isiliye i<n
// loop i = 1 se chalega kyunki maine 0th element ko sorted maan liya
// fetch -> compare -> shift -> copy
// worst case m T.c = O(n square), best case m T.C = O(n); 

#include<iostream>
#include<vector>
using namespace std;

void insertionSort(vector<int> &arr){
    int n = arr.size();
    for(int round = 1; round < n ; round++){
        // step-1: FETCH
        int val = arr[round];

        //step-2: COMPARE
        int j = round -1;// isko j wale loop ke bahar access kr rhe h isiliye for se pehle declare kiya taaki neeche access kar paaye
        for(; j>=0; j--){
            if(arr[j] > val){
                // step-3: SHIFT 
                arr[j+1] = arr[j];
            }
            else{
                // RUKNA H
                break;
            }
            // step-4: COPY 
        }
            arr[j+1] = val;
    }
}

void vecPrint(vector<int> &arr){
    for(int i =0; i< arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> arr = {5,4,3,2,1,55,323};
    insertionSort(arr);
    vecPrint(arr);
    return 0;
}