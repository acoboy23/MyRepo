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

        template <class I>
        void printAnything(I n);
    protected:
    private:
};

#endif // GIT_H
