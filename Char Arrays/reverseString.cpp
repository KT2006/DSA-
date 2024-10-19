#include<iostream>
#include<string.h>
using namespace std;

void reverseString(char ch[], int size){
    int i = 0;
    int j = size -1;

    while(i<=j){
        swap(ch[i],ch[j]);
        i++;
        j--;

    }


}

int main(){
    char ch[100];
    cin.getline(ch,100);
    int size = strlen(ch);

    reverseString(ch,size);
    cout<<ch;

    return 0;
}