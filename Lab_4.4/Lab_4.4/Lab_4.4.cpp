#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
    double R, xp, xk, dx, x, y;

    cout << "R = "; cin >> R;
    cout << "Xpoch = "; cin >> xp;
    cout << "Xkin = "; cin >> xk;
    cout << "dx = "; cin >> dx;

    cout << fixed;
    cout << "-----------------------------" << endl;
    cout << "|" << setw(5) << "x" << "   |"
        << setw(7) << "y" << "      |" << endl;
    cout << "-----------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= -5)
            y = -3;
        else
        {
            if (x < -R)
                y = 3 * (x + R) / (5 - R);
            else
            {
                if (x <= R)
                    y = sqrt(R * R - x * x);
                else
                {
                    if (x < 8)
                        y = R * (x - R) / (8 - R);
                    else
                        y = R;
                }
            }
        }

        cout << "|" << setw(7) << setprecision(2) << x
            << "  |" << setw(10) << setprecision(3) << y
            << "  |" << endl;

        x += dx;
    }
    cout << "-----------------------------" << endl;

    return 0;
}