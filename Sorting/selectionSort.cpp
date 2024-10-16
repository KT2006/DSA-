  #include<iostream>
  #include<vector>
  using namespace std;
void vectorPrint(vector<int> arr){
    for(int i =0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
cout<<endl;
}
void selectionSort(vector<int> &arr){
    int n = arr.size();
    for(int i =0;i<n-1;i++){//yeh outer loop h here, we won't process last element isiliye n-1
    int minIndex = i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[minIndex]){
            minIndex = j;
        }

    }
    swap(arr[i],arr[minIndex]);
    }
}
  int main(){
    vector<int>arr = {7,4,2,3,5,1,19};
    selectionSort(arr);
    vectorPrint(arr);
    return 0;
  }