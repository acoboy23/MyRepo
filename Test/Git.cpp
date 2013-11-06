#include "Git.h"
#include <iostream>

using namespace std;

Git::Git()
{
    cout << "This is for GIT!" << endl;
    cout << "Max is " << myMax(45,56) << endl;
}

template <class T>
T Git::myMax(T a, T b)
{
    return a>b?a:b;
}
