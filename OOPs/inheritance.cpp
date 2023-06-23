#include <iostream>
using namespace std;

class human
{
public:
    int age;
    int weight;

public:
    void setWeight(int w)
    {
        this->weight = w;
    }
    int getAge()
    {
        return this->age;
    }
};

class male : public human
{
public:
    string color;
    void sleeping()
    {
        cout << "Male is sleeping" << endl;
    }
};
int main()
{
    male obj;
    obj.age = 56;
    obj.setWeight(68);
    cout << "Age is: " << obj.getAge() << endl;
    obj.sleeping();

    return 0;
}