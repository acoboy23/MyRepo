#include <iostream>
#include <string>
#include <stdio.h>
//#include "Git.h"

using namespace std;

int myMax(int x, int y)
{
    return x>y?x:y;
}


int main()
{
    cout << myMax(54,567) << endl;
    return 0;
}
