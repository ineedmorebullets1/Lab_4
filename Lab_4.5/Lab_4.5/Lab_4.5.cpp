#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
    double R, x, y;

    srand((unsigned)time(NULL));

    cout << "R = "; cin >> R;

    cout << fixed;
    for (int i = 0; i < 10; i++)
    {
        x = 4 * R * rand() / RAND_MAX - 2 * R;
        y = 4 * R * rand() / RAND_MAX - 2 * R;

        if (((x - R) * (x - R) + y * y <= R * R && y >= 0) ||
            (x >= -R && x <= 0 && y >= -R && y <= 0 &&
                (x + R) * (x + R) + (y + R) * (y + R) >= R * R))
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "yes" << endl;
        else
            cout << setw(8) << setprecision(4) << x << "  "
            << setw(8) << setprecision(4) << y << "  " << "no" << endl;
    }

    return 0;
}