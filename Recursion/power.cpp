#include<iostream>
using namespace std;

int power(int n ){
    if(n == 0){
        return 1 ;
    }
    int ans = 2 * power(n-1);
    return ans;
}
int main(){
    int n = 10;
    cout<<power(n);
    return 0;
}