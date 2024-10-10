#include<iostream>
#include<vector>
using namespace std;

void printDigits(int num,vector<int> &v){
    if(num <= 0)return;

    printDigits(num / 10,v);
    v.push_back(num %10);//normal printing chahiye toh iss line ko hatake seedha cout num%10 kardo
}
int main(){
    vector<int> v;
    printDigits(4215,v);
    for(int num :v){
        cout<<num<<" ";
    }
    return 0;
}