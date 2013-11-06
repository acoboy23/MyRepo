#include <iostream>
using namespace std;

#define MIN(a,b) (a<b?a:b)

int main()
{
    int i,j;
    i = 100.7;
    j = 30.6;

    cout << "The min is " << MIN(i,j) << endl;

    return 0;
}
