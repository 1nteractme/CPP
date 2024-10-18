#include <iostream>
#include <math.h>
using namespace std;

double CountFact(int n)
{
    if (n == 0)
        return 1;
    else
        return n * CountFact(n - 1);
}

double Formula(int x, int i)
{
    return pow(x, i) / CountFact(i);
}

int main()
{
    int x;
    double sum = 0;
    float q = 0.1;

    cout << "Введите x: " << endl;
    cin >> x;

    if (x <= 0)
    {
        cout << "x должен находится в диапазоне натуральных чисел!" << endl;
        return 0;
    }

    // cout.precision(4);

    for (int i = 0; abs(exp(x) - sum) > q; ++i)
        sum += Formula(x, i);

    cout << "Экспонентальная ф-я: " << exp(x) << endl;
    cout << "Сумма ряда Тейлора: " << sum << endl;

    return 0;
}
