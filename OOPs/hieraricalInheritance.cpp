/*

    A
   / \
  B   C
 / \  /\
D   E  F G

*/
#include <iostream>
using namespace std;
class A
{
public:
    void printClassA()
    {
        cout << "This is Class A" << endl;
    }
};

class B : public A
{
public:
    void printClassB()
    {
        cout << "This is Class B" << endl;
    }
};

class C : public A
{
public:
    void printClassC()
    {
        cout << "This is Class C" << endl;
    }
};
int main()
{

    return 0;
}