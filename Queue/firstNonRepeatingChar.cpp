//leetcode question no 387, but there's a catch yaha loop ke andar loop h but cause we are simultaneously printing the values
//but waha hame bas index return krna h, so waha pehel for loop ka use krke fetch krna,frequency set krna aur queue m push krna
//uske baad dusre loop m q.front ki frequency check kro and = 1 hua toh index print krdo,else print -1
#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<char>q;
    string str = "ababc";
    int freq[26]={0};//max 26 characters hi ho skte h isiliye size 26 rkha and sabko 0 se initialize krdiya
    for(int i=0;i<str.length();i++){
        //character fetch kro
        char ch = str[i];
        //usko frequency table m update kro
        freq[ch-'a']++;
        //usko queue m push krdo
        q.push(ch);
        //loop chalao q se element nikalo, uski frequency check kro and ans print kro
        while(!q.empty()){
            //front element nikalo
            char frontChar = q.front();
            //iski frequency check kro
            if(freq[frontChar-'a']>1){
                //yeh toh pakka answer nhi hoga toh isko pop krdo
                q.pop();
            }
            else{
                //yeh == 1 wala case hoga, 0 nhi aa skta cause on line 12th hamne ++ krdiya h;
                cout<<frontChar<<"->";
                break;
            }

        }
        //loop ke bahar aagye toh check ans nhi mila hoga
        if(q.empty()){
            cout<<"#"<<"->";
        }
    }
}