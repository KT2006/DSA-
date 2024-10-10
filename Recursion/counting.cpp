#include<iostream>
using namespace std;

void tailCounting(int n){
    //base case banao
    if(n == 1) {
        cout<<1;
        return;
    }
    //processing wala step
    cout<<n<<" ";

    //recursive call
    tailCounting(n-1);

}
void headCounting(int n ){
    if(n == 1) {
        cout<<1<<" ";
        return;
    }
    headCounting(n - 1);
    cout<<n<<" ";
}
int main(){
    int n = 100;
    // tailCounting(n);
    headCounting(n);
    return 0;
}