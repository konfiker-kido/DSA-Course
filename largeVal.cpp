/*

Given a big positive number x represented as string, 
find value of x % 11 or x mod 11.
Output is expected as an integer.

*/
#include<iostream>
using namespace std;

int xmod11(string x)
{
      int64_t num=0;
       for(int i=0;i<x.length();i++){
           int rem=x[i]-'0';
           num=((num*10)+rem)%11;  // we are divide every time to so that we have to use less memory
       }
       return num; 
}
int main(){
    
  string str="231456786543567898765";
  cout<<xmod11(str);

return 0;
}