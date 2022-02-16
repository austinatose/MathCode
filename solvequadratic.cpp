#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    cout << "Quadratic formula \nPlease input 3 non-zero integers.";
    int a, b, c, d, e;
    long double f, g;
    cin >> a >> b >> c;
    d = b * b;
    e = 4 * a * c;
    b = 0 - b;
    a = 2 * a;
    if (d - e < 0)
    {
        cout << "No real roots";
        return 0;
    }
    else
    {
        f = b + sqrt(d - e);
        g = b - sqrt(d - e);
        f /= a;
        g /= a;
        if (f == g)
        {
            cout << "x = " << f;
            return 0;
        }
        else
        {
            cout << "x = " << f << " and " << g;
        }
    }
}