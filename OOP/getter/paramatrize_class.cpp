#include <bits/stdc++.h>
using namespace std;

class hero
{

private:
    int health;

public:
    char *name;
    char level;
    static int timeToComplete; // static data members

    hero()
    {
        cout << "Simple constructor called" << endl;
        name = new char[100];
    }

    // paramerterised Constructor
    hero(int health)
    {
        this->health = health;
    }

    hero(int health, char level)
    {
        this->health = health;
        this->level = level;
    }
    // copy constructor
    hero(hero &temp)
    {
        cout << "Copy Constructor called" << endl;
        this->health = temp.health;
        this->level = temp.level;
    }
    void print()
    {
        cout << "health " << this->health << endl;
        cout << "level " << this->level << endl;
    }

    int getHealth()
    {
        return health;
    }

    char getLevel()
    {
        return level;
    }
    void setHealth(int h)
    {
        health = h;
    }
    void setLevel(char ch)
    {
        level = ch;
    }
    // Destructor
    ~hero()
    {
        cout << "Destcructor bhai called" << endl;
    }
};

int hero::timeToComplete = 5;

int main()
{

    cout << hero::timeToComplete << endl; // this is recommanded
    hero a;
    cout << a.timeToComplete << endl;

    hero b;
    b.timeToComplete = 10;
    cout << a.timeToComplete << endl;
    cout << b.timeToComplete << endl;

    // hero suresh(70,'C');
    // suresh.print();

    // // Copy Constructor
    // hero ritesh(suresh);
    // ritesh.print();

    // hero h1(20);
    // h1.print();

    // hero *h = new hero(30);
    // h->print();
    // hero temp(30,'h');
    // temp.print();

    // //Static
    // hero a;

    // //Dynamic
    // hero *b = new hero;
    // //manually destructor call
    // delete b;

    return 0;
}