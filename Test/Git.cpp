#include "Git.h"
#include <iostream>
#include <string>

using namespace std;

Git::Git()
{
    cout << "This is for GIT!" << endl;
  //cout << "Max is " << myMax(45,56) << endl;
}

template <class T>
T Git::myMax(T a, T b)
{
    return a>b?a:b;
}

template <class I>
void Git::printAnything(I n)
{
    cout << "printAnything: " << n << endl;
}
