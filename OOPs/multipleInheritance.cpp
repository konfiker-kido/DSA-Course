#include<iostream>
using namespace std;
class animal
{
public:
    int leg;
    int eye;
    void bark()
    {
        cout << "Barking" << endl;
    }
};
class human 
{
    public:
      void speak()
    {
        cout << "Speaking" << endl;
    }
};
class hybrid : public animal,public human
{
};


int main(){
 hybrid obj;
 obj.bark();
 obj.speak();
return 0;
}