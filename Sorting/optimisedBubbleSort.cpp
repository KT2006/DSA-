#include<iostream>
#include<vector>
using namespace std;
void vectorPrint(vector<int>arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void optBubbleSort(vector<int> &arr){
    int n = arr.size();
    for(int i =1;i<n;i++){
        bool swapped = false;
        for(int j =0;j<n-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false) {
            cout<<"array is already sorted"<<endl;
            break;
        }
    }
}
int main(){
    vector<int> arr = {4,2,5,1,53,21,0,-1};
    optBubbleSort(arr);
    vectorPrint(arr);
    return 0;
}