#include <iostream>
using namespace std;
class hero
{

public:
    int health;
    int level;
    int access;
    static int timeToComplete; // static data member
    hero()
    {
        access = timeToComplete; // constructor can access static data member
    }
    int print()
    {
        return access;
    }
    static int staticFunction()
    { // it can only access static data member
        // return level;  it will through error because level is not static data member
        // this->health   will through error because static member function did not support this keyword
        return timeToComplete;
    }
};

int hero::timeToComplete = 100; // initialisation of static data member

int main()
{

    // we can direcly call to static data member
    // because it refers to class, not object
    cout << hero::timeToComplete << endl;

    cout << "After modifying the value of static data member " << endl;
    hero::timeToComplete = 20;
    cout << hero::timeToComplete << endl;

    // we can also access it by the help of object
    hero h1;
    cout << " Constructor accessed static data member: " << h1.print() << endl;
    cout << h1.timeToComplete << endl;

    //  calling static member function
    cout << "Static data member function called: " << hero::staticFunction() << endl;

    return 0;
}