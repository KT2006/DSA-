#include<iostream>
using namespace std;

int main(){
    int a = 18;
    int b = 12;
 //firstly u can use the inbuilt function in cpp and swap these

//  swap(a,b);
//  cout<<a<<" "<<b<<endl; // swapped 

// secondly using a temp variable 

// int temp = a;
// a = b;
// b = temp;
//  cout<<a<<" "<<b<<endl; // swapped 

// thirdly u can use (+.-) operations and swap

// a  = a + b;
// b = a - b;
// a = a - b;
//  cout<<a<<" "<<b<<endl; // swapped 



// lastly u can use xor and swap the values

a = a^b;
b = a^b;
a = a^b;
 cout<<a<<" "<<b<<endl; // swapped 

 // and XOR wala method is the fastest amongst all the other ones
 // the reason is ki computer takes time to evaluate +,- where as bitwise operators like XOR, AND, OR , NAND take less time to be evaluated
 // CAUSE IT IS MORE CLOSE TO COMPUTER HARDWARE IMPLEMENTATION
    return 0;
}