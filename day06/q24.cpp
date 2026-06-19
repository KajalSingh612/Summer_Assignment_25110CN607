//wap to find x^n without using pow function
#include <iostream>
using namespace std;
int main()
{
    double x;
    int n;
    cout << "Enter base (x): ";
    cin >> x;
    cout << "Enter exponent (n): ";
    cin >> n;

    double result = 1.0;
    for (int i = 0; i < abs(n); ++i) {
        result *= x;
    }

    if (n < 0) {
        result = 1.0 / result;
    }

    cout << x << "^" << n << " = " << result << endl;
    return 0;
}