#include<iostream>
#include<vector>
using namespace std;

vector<int> rearrangeArray(vector<int> &nums){
    vector<int> pos,neg;

    for(int i = 0;i<nums.size();i++){
        if(nums[i] < 0) {
            neg.push_back(nums[i]);
        }
        else{
            pos.push_back(nums[i]);
        }
    }
    int i = 0;
    vector<int> ans;
    while(i<pos.size()){
        ans.push_back(pos[i]);
        ans.push_back(neg[i]);
        i++;
    }
    return ans;
};

void printVec(vector<int> &nums){
  for(int i = 0; i < nums.size(); i++){
  cout<<nums[i]<<" ";
}
}

int main(){
    vector<int> v = {3,1,-2,-5,2,-4};
    vector<int> result = rearrangeArray(v);
    printVec(result);
} 