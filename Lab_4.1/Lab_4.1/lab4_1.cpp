#include <iostream>
using namespace std;

int main()
{
    int N, k;
    double P;

    cout << "N = "; cin >> N;

    // 1) while
    P = 1;
    k = N;
    while (k <= 19)
    {
        P *= (1. * (k - N) / (k + N) + 1);
        k++;
    }
    cout << P << endl;

    // 2) do-while
    P = 1;
    k = N;
    do {
        P *= (1. * (k - N) / (k + N) + 1);
        k++;
    } while (k <= 19);
    cout << P << endl;

    // 3) for (k зростає)
    P = 1;
    for (k = N; k <= 19; k++)
    {
        P *= (1. * (k - N) / (k + N) + 1);
    }
    cout << P << endl;

    // 4) for (k спадає)
    P = 1;
    for (k = 19; k >= N; k--)
    {
        P *= (1. * (k - N) / (k + N) + 1);
    }
    cout << P << endl;

    return 0;
}
