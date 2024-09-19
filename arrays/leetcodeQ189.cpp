// ROTATE AN ARRAY - using reversal method

#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

void vecPrint(vector<int> &v){
    for(int i =0; i< v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int k = 3;
    vector<int> v  = {1,2,3,4,5,6,7};
    k = k % v.size();
//step - 1 ->  reverse (0, n);
    reverse(v.begin(),v.end());

//step-2 -> reverse (0,k-1);
    reverse(v.begin(), v.begin()+k);  // reverse method yaha bas k-1 th element tk hi reverse krega
//step-3 -> reverse (k,n-1);
    reverse(v.begin()+k, v.end());

vecPrint(v);

    return 0;
}