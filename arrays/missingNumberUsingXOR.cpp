#include<iostream>
#include<vector>
using namespace std; 


int missingNumber(vector<int> &v){
    int ans =0;
for(int i  = 0; i <=v.size(); i++){
  ans  = ans ^ i ;

}
for(int i = 0; i < v.size();i++){
    ans= ans ^ v[i];
}

    return ans;
}
int main(){
    vector<int> v  = {9,6,4,2,3,5,7,0,1};

cout<<"The missing number from the following array is:"<<missingNumber(v);
    return 0;
}