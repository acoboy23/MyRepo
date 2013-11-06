#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "Git.h"

using namespace std;


class Enemy
{
public:
    virtual void attack(int a){};
};

class Monster: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Monster attack -" << a << endl;
    };
};

class Ninja: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Ninja attack -" << a << endl;
    };
};

class Gorilla: public Enemy
{
public:
    void attack(int a)
    {
        cout << "Gorilla attack -" << a << endl;
    };
};

int main()
{
    srand (time(NULL));

    Monster m;
    Ninja n;
    Gorilla g;

    Enemy *e1 = &m;
    Enemy *e2 = &n;
    Enemy *e3 = &g;

    //attack
    e1->attack(rand() % 100);
    e2->attack(rand() % 100);
    e3->attack(rand() % 100);

    cout << "Let's make this clear..." << endl;
    Git g1;
    g1.printSomething("Hey, it works perfect!");

    return 0;
}
