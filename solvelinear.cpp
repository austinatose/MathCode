#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    float a, b, c, p, q, r;
    cout << "a b c p q r \n";
    cin >> a >> b >> c >> p >> q >> r;
    if (p*b == a*q) {
        if (a*r == p*c) {
            cout << "Infinite number of solutions";
        } else {
            cout << "No solution";
        }
    } else {
        float solution_y = (p*c - a*r)/(p*b - a*q);
        float solution_x = (b*r - q*c)/(p*b - a*q);
        cout << "x = " << solution_x << "\n y= " << solution_y;
    }
}