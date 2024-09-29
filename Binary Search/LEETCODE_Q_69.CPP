#include<iostream>
using namespace std;

int sqrt(int x){
    int start = 0;
    int end = x;
    int ans = -1;
    int mid = start + (end - start)/2;
    while(start <= end ){
        if(mid*mid == x){
            return mid;
        }
        else if(mid*mid <x){
            //less than ke case m ans store karo aur right m jaoo
            ans = mid;
            start = mid+1;
        }
        else {
            //left m jaaaoooo
            end = mid - 1;
        }
        mid = start + (end - start)/2;

    }
    return ans;
}