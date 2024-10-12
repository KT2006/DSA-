//agar first include phr exclude krna h toh then tum normally include krlo same way m but exlucde krte time ans.pop_back() (andar koi value likhne ki jarurat nhi) krke phr recursive call krna
#include<iostream>
using namespace std;

void findSubSequence(string str, string ans,int index){
    //base case
    if(index >= str.length()){
        //ans build ho chuka hoga isiiye print karo aur return kr jaao
        cout<<"-> "<<ans<<endl;
        return;
    }
    char ch = str[index];
    //exclude wala case (ismein kuch nhi recursive call hota h and index + 1 ho jaata h)
    findSubSequence(str,ans,index + 1);

    //include wala case ( ismein tumko phele ans wale string m value push krni hogi then recursive call krna hoga)
    ans.push_back(ch);
    findSubSequence(str,ans,index+1);
}
int main(){
    string str = "abc";
    string ans = "";
    int index = 0;
    findSubSequence(str,ans,index);
    return 0;
}