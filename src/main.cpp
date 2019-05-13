#include "foo.h"
#include <iostream>
#include <math.h>
using namespace std;
const float PI = 3.1415;
int main()
{
    int a, b, c, r;
    float p, s;

    cout << " Enter radius of circle : ";
    cin >> r;
    p = PerimetrC(r, PI);
    s = SquareC(r, PI);
    cout << " Perimetr : " << p << " Square : " << s << endl;


    cout << " Enter sidex of triangle : ";
    cin >> a >> b >> c;
    p = PerimetrT(a, b, c);
    s = SquareT(a, b, c);
    cout << " Perimetr : " << p << " Square : " << s << endl;

    return 0;
}
