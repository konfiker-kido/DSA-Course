#include<iostream>
using namespace std;

void printNumbers(int num){
    if(num==0){
      cout<<endl;
      cout<<"----Returning back --"<<endl;
      return;
    }

    // tail recursion
    cout<<num<<" ";
    printNumbers(num-1);

    //head reccursion
     cout<<num<<" ";

}
int main(){
  printNumbers(10);

return 0;
}