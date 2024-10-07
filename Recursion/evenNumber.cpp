#include<iostream>
#include<vector>
using namespace std;

void evenNumber(int arr[],int size,int index,vector<int> &v){
    if(index >= size){
        return;
    }
    if(arr[index] % 2 == 0) {
        v.push_back(arr[index]);
    }
    evenNumber(arr,size,index+1,v);

}

int main(){
     int arr[] = {1, 2, 3, 4, 5, 6,100,66,43,32,33,11};
    int size = sizeof(arr) / sizeof(arr[0]);
        vector<int> v;

    evenNumber(arr, size, 0, v);

    for (int num : v) {
        cout << num << " ";
    }
    return 0;
}