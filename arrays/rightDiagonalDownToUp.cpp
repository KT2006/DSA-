#include<iostream>
using namespace std;

int main(){

    int arr[3][3] = {
    {1,2,3},
    {4,5,6},
    {7,8,9}
};
int i = 2, j = 0;
for(;j<3;j++){
    cout<<arr[i--][j]<<endl;
}


    return 0;
}