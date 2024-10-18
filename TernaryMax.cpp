#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Введите 3 числа: " << endl;
    cin >> a;
    cin >> b;
    cin >> c;

    int max = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "max is: " << max << endl;
    return 0;
}
