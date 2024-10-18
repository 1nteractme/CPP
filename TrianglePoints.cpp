#include <iostream>
#include <math.h>
using namespace std;

float CountLength(float sx, float ex, float sy, float ey)
{
    float lx = (sx - ex);
    float ly = (sy - ey);
    return sqrt(pow(lx, 2) + pow(ly, 2));
}

float CountArea(float a, float b, float c)
{
    float p = (a + b + c) / 2;
    return sqrt(p * (p - a) * (p - b) * (p - c));
}

int main()
{
    float x1, y1, x2, y2, x3, y3, x4, y4;
    float l1, l2, l3, l4, l5, l6;
    float s, s1, s2, s3;
    float k = 0.001;
    float q;

    cout << "Введите корды для точки 1: ";
    cin >> x1;
    cin >> y1;
    cout << "Введите корды для точки 2: ";
    cin >> x2;
    cin >> y2;
    cout << "Введите корды для точки 3: ";
    cin >> x3;
    cin >> y3;
    cout << "Введите корды для точки 4: ";
    cin >> x4;
    cin >> y4;

    l1 = CountLength(x1, x2, y1, y2);
    l2 = CountLength(x2, x3, y2, y3);
    l3 = CountLength(x3, x1, y3, y1);
    l4 = CountLength(x1, x4, y1, y4);
    l5 = CountLength(x2, x4, y2, y4);
    l6 = CountLength(x3, x4, y3, y4);

    s = CountArea(l1, l2, l3);
    s1 = CountArea(l1, l4, l5);
    s2 = CountArea(l2, l5, l6);
    s3 = CountArea(l3, l4, l6);

    q = abs(s - s1 - s2 - s3);
    cout << q << endl;
    if (q < k)
        cout << "Точка с кордами: " << "(" << x4 << ";" << y4 << ")" << " лежит внутри треугольника." << endl;
    else
        cout << "Точка с кордами: " << "(" << x4 << ";" << y4 << ")" << " лежит вне треугольника." << endl;

    return 0;
}
