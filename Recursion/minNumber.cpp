#include<iostream>
using namespace std;

// void minNumber(int arr[], int size, int index, int &mini) {
//     if (index >= size) return;
//     if (arr[index] < mini) {
//         mini = arr[index];
//     }
//     minNumber(arr, size, index + 1, mini);
// }

void minNumber(int arr[],int size,int index,int &mini){//by reference bheja taaki original mini joki main function m h usmein changes ho agar normally pass(by value) krta toh changes save nhi hote kyunki by value wale m copy banti h aur usmein changes hote h
    //base case
    if(index >= size) return;
    //checking the min
    mini = min(arr[index],mini); //yeh mai soch nhi paaya tha sir wla method h yeh
    //recursive funtion call
    minNumber(arr,size,index+1,mini);
}
int main (){
    int arr[] = {100,200,300,400,500,0,600,-700};
    int size = 8;
    int index = 0;
    int mini = INT_MAX;
    minNumber(arr,size,index,mini);
    cout<<"the minimum number of the array is:"<<mini<<endl;
    return 0;
}