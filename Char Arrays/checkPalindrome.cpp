#include <iostream>
#include<string.h>
using namespace std;

bool verifyPalindrome(char arr[], int size){
  int i =0, j = size - 1;
  while(i <= j){
    if(arr[i] == arr[j]){
      //characters match kr rhe h toh aage bado
      i++;
      j--;
    }
    else{
      // agar match nhi kr rhe toh woh palindrome nhi h
        return false;
    }
  }
  //agar loop khtm hoke tum bahar aaagye toh iska mtlb sabhi characters match kr gye which means ki the given string is a palindrome
  return true;
}
int main() {
  char arr[100];
  cin.getline(arr,100);
  int size = strlen(arr);
  bool flag  = verifyPalindrome(arr,size);
  if(flag == true){
    cout<<"The given string is a palindrome";
  }
  else{
    cout<<"NOT A PALINDROME";
  }

  return 0;
}