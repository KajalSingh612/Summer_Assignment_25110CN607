//wap to find nth term of Fibonacci series
#include <iostream>
using namespace std;
int main() {
    int n, t1 = 0, t2 = 1, nextTerm;

    cout << "Enter the term number: ";
    cin >> n;

    if (n == 1) {
        cout << "The " << n << "st term of the Fibonacci series is: " << t1;
    } else if (n == 2) {
        cout << "The " << n << "nd term of the Fibonacci series is: " << t2;
    } else {
        for (int i = 3; i <= n; ++i) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        cout << "The " << n << "rd term of the Fibonacci series is: " << nextTerm;
    }

    return 0;
}