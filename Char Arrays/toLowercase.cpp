#include <iostream>
using namespace std;

void toLowercase(char ch[],int size){
  int i =0;
while(ch[i] != '\0'){
    char currChar = ch[i];
  //check if the current characeter is a lower case one or upper case one

  if(currChar>='A' && currChar<='Z'){
    ch[i] = currChar -'A' + 'a';

  }
  i++;
}
}

int main() {
  char ch[100];

  cin.getline(ch,100);

  cout<<"Before conversion: "<<ch<<endl;
  toLowercase(ch,100);
  cout<<"after conversion: "<<ch<<endl;
  
  return 0;
}