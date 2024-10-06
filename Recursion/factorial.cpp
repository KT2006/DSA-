#include<iostream>
using namespace std;

int factorial(int n ){
    if(n == 0 || n == 1) return 1;
    int recursionAns = factorial(n-1);// nothing much pehle returned ans ko store kiya and later use kiya

    int finalAns = n * recursionAns;
    return finalAns;
}
int main(){
    int n = 5;
    cout<<factorial(5)<<endl;

    return 0;
}