#include <iostream>
#include<vector>
using namespace std;

void vectorPrint(vector<int>arr){
  for(int i= 0;i<arr.size();i++){
    cout<<arr[i]<<" ";
  }
  cout<<endl;
}
void bubbleSort(vector<int>&arr){
  int n = arr.size();
  for(int i=0;i<n-1;i++){
    for(int j = 0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j+1],arr[j]);//aage wale element se comparision krte hue j aage badhega and simultaneously swap krte jaayega
      }
    }
  }
}
int main() {
  vector<int> arr = {7,1,5,18,13,211,4};
  bubbleSort(arr);
  vectorPrint(arr);
}