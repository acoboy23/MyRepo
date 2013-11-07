#include <iostream>

using namespace std;

void printMultiply(int * x, int * y)
{
    *x = 7;
    *y = 8;

    cout << "x:\t" << *x << endl;
    cout << "y:\t" << *y << endl;
}

int main()
{
    int i = 5;
    int j = 6;

    printMultiply(&i,&j);

    cout << "i:\t" << i << endl;
    cout << "j:\t" << j << endl;

    return 0;

}
