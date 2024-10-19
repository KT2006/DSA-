#include <iostream>
using namespace std;

void toUppercase(char ch[],int size){
  int i =0;
while(ch[i] != '\0'){
    char currChar = ch[i];
  //check if the current characeter is a lower case one or upper case one

  if(currChar>='a' && currChar<='z'){
    ch[i] = currChar -'a' + 'A';

  }
  i++;
}
}

int main() {
  char ch[100];

  cin.getline(ch,100);

  cout<<"Before conversion: "<<ch<<endl;
  toUppercase(ch,100);
  cout<<"after conversion: "<<ch<<endl;
  
  return 0;
}