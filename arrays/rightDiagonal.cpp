#include<iostream>
using namespace std;

int main(){
    int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int i =0, j=2;
for(;j>=0;j--){
    cout<<arr[i++][j];
}
cout<<endl;
}