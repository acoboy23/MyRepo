#ifndef GIT_H
#define GIT_H

#include <string>

using namespace std;

class Git
{
    public:
        Git();

        template <class T>
        T myMax(T a, T b);

        void printString(string s);
        void printNumber(int i);
    protected:
    private:
};

#endif // GIT_H
