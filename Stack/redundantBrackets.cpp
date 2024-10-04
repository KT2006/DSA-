#include<iostream>
#include<stack>
using namespace std;

bool checkRedundant(string str){
    stack<char>st;
    for(int i =0;i<str.length();i++){
        char ch = str[i];
        if(ch == '(' || ch == '+' || ch == '-'|| ch == '*'|| ch == '/'){
            st.push(ch);
        }
        else if(ch == ')'){//agar koi closing bracket milta h toh uske opening bracket tk traversal krunga
            //agar closing bracket ki baat ho rhi h toh operator count kro
            int operatorCount =0;
            while(!st.empty() && st.top()!='('){
                char temp = st.top();
                if(temp == '+' || temp == '-'|| temp == '*' || temp== '/'){
                    operatorCount++;
                }
                st.pop();
            }
            //loop ke bahar tabhi aaoge jab yaa toh apka empty hoga
            // ya apke stck pr koi opening bracket hoga
            st.pop();
            if(operatorCount == 0) return true;
        }
    }
    //agar m yaha tk aagya toh iska mtlb har ek bracket ke beech m ek operator pakka mila hoga
    return false;
}
int main(){
    string str = "(((a+b))*(a-b))";
    bool ans = checkRedundant(str);

    if(ans == true){
        cout<<"Redundant brackets found"<<endl;

    }
    else{
        cout<<"Redundant brackets NOT found"<<endl;
    }
    return 0;
}