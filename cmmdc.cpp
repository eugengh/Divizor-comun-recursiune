#include <iostream>

using namespace std;

int cmmdc(int a, int b)

{

    if (a==b)

        return a;

    if (a>b)

        return cmmdc(a-b, b);
    else

        return cmmdc(a, b-a);

}

int main()
 {

    int f;

    f = cmmdc(18, 24);

    cout<<f;

    return 0;

}