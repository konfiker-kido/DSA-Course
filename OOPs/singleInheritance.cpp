#include <iostream>
using namespace std;
class animal
{
     public:
    int leg;
    int eye;
    void speak()
    {
        cout << "Speaking" << endl;
    }
};
class dog : public animal
{
};

int main()
{
    dog d1;
    d1.speak();
    return 0;
}