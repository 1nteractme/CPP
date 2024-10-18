#include <iostream>
#include <math.h>

using namespace std;

void main(){
    int a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;

    float d = pow(b, 2) - 4 * a * c;
    if (d > 0){
        float k1 = (-1 *b )/ 2 * a;
        float k2 = b / 2 * a;
        cout << "roots are: " << k1 << "," << k2  << endl;
    }
    else if (d == 0){ // 1k
        float k = b / 2 * a;
        cout << "root is: " << k << endl;
    }
    else{
        cout << "0k" << endl;
    }
}
