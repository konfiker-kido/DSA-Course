#include <iostream>
using namespace std;
class hero
{
    string name;
    int health;
    int level;

public:
    int getHealth()
    {
        return health;
    }
    int getLevel()
    {
        return level;
    }
    void setHealth(int health)
    {
        this->health = health;
    }
    void setLevel(int level)
    {
        this->level = level;
    }
    void setName(string name)
    {
        this->name = name;
    }
    void print()
    {
        cout << endl;
        cout << "[Name: " << name << " ,health: " << health << " ,Level: " << level << "]" << endl;
    }
};

int main()
{
    hero h;
    h.setHealth(100);
    h.setLevel(2);
    h.setName("Akash");
    h.print();
    cout << "Size of class : " << sizeof(h) << endl;

    // hero h1(h);   copy constructor  (it is a default constructor)
    hero h1 = h; // second way to create copy constructor
    h1.print();
    h.setHealth(80);
    h.print();
    h1.print();

    return 0;
}