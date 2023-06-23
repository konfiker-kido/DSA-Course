#include<iostream>
using namespace std;

int pow(int num,int t){
    if(t==0)
      return 1;

      return num*pow(num,t-1);
}
int main(){
   
   cout<<pow(5,4);
return 0;
}