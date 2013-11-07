#include <iostream>

using namespace std;

template<class T>
double myMax(T x, T y)
{
    return x>y?x:y;
}

int main()
{
    cout << "This is a completely different main.cpp" << endl;
    int x = 5;
    int y = 6.7;

    cout << "The max is " << myMax((double)x, (double)y) << endl;

    /*
        this is not going to affect the "master" branch
        because it is on another branch called "try"

        if anything goes wrong.. doesn't affect anything else
    */

    return 0;
}
