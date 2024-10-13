#include<iostream>
#include<vector>
using namespace std;

int combineDigits(vector<int> &v){
    int num = 0;
    for(int digit : v){
        num = num * 10 + digit;
    }
    return num;
}

int main(){
    vector<int> v = {4, 2, 1, 5}; // Example vector
    int number = combineDigits(v);
    cout << number << endl;
    return 0;
}
