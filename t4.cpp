#include <iostream>
#include <cmath>
using namespace std;

double F1(int x, int a, int b, int c)
{
    if ((x != 0 && c != 0) || x - c > 0)
    {
        if (x < 0 && b != 0)
            return (a * pow(x, 2)) + b;

        else if (x > 0 && b == 0)
            return (x - a) / (x - c);

        else
            return x / c;
    }
    else
        return 0;
}

double F2(int x, int a, int b, int c)
{
    if (x != 0 && c - 4 != 0)
    {
        if (x + 5 < 0 && c == 0)
            return (1 / (a * x)) - b;

        else if (x + 5 > 0 && c != 0)
            return (x - a) / x;

        else
            return (10 * x) / (c - 4);
    }
    else
        return 0;
}

double F3(int x, int a, int b, int c)
{
    if (x - c != 0)
    {
        if (a < 0 && c != 0)
            return (a * pow(x, 2)) + (b * x) + c;

        else if (a > 0 && c == 0)
            return (-1 * a) / (x - c);

        else
            return a * (x + c);
    }
    else
        return 0;
}

double F4(int x, int a, int b, int c)
{
    if (c != 0 && c - a != 0)
    {
        if (c < 0 && x != 0)
            return (a * x * -1) - c;

        else if (c > 0 && x == 0)
            return (x - a) / (-1 * c);

        else
            return (b * x) / (c - a);
    }
    else
        return 0;
}

int main()
{
    int xs, xe, a, b, c, d;
    double F;

    cout << "x start: ";
    cin >> xs;
    cout << "x end: ";
    cin >> xe;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    cout << "step: ";
    cin >> d;

    cout << "X" << '\t' << "F\n";

    for (double x = xs; x <= xe; x += d)
    {
        F = F1(xs, a, b, c);
        // F = F3(x, a, b, c);
        // F = F3(x, a, b, c);
        // F = F4(x, a, b, c)
        cout << x << '\t' << F << '\n';
    }

    return 0;
}