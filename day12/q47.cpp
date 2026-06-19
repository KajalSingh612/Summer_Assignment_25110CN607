#include <iostream>
using namespace std;

bool isFibonacci(int n) {
    if (n == 0 || n == 1)
        return true;

    int a = 0, b = 1, c;

    while (b < n) {
        c = a + b;
        a = b;
        b = c;
    }

    return b == n;
}

int main() {
    int n;
    cin >> n;

    if (isFibonacci(n))
        cout << "Fibonacci Number";
    else
        cout << "Not a Fibonacci Number";

    return 0;
}