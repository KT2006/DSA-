#include<iostream>
using namespace std;
int recursiveFibo(int n){
    if( n == 1) return 1;
    if(n == 0) return 0;
    //processing
    int ans = recursiveFibo(n-1) + recursiveFibo(n-2);

    return ans;
}

int main(){
    int n = 10;
    recursiveFibo(n);
    return 0;
}