#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double a, b, c, xp, xk, dx, x, F;

    cout << "a = "; cin >> a;
    cout << "b = "; cin >> b;
    cout << "c = "; cin >> c;
    cout << "Xpoch = "; cin >> xp;
    cout << "Xkin = "; cin >> xk;
    cout << "dX = "; cin >> dx;

    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "F" << "      |" << endl;
    cout << "-----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (c < 0 && b != 0)
            F = a * x * x + b * b * x;
        else
        {
            if (c > 0 && b == 0)
                F = (x + a) / (x + c);
            else
                F = x / c;
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << "  |" << setw(10) << setprecision(3) << F
            << "  |" << endl;

        x += dx;
    }
    cout << "-----------------------------" << endl;

    return 0;
}