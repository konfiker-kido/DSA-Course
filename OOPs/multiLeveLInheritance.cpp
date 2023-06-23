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
class germanSheford : public dog
{
};

int main()
{
    germanSheford obj;
    obj.speak();
    return 0;
}