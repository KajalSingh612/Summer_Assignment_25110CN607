//wap to write function to find factorial of a number
#include <iostream>
using namespace std;

int findFactorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * findFactorial(n - 1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial: " << findFactorial(num) << endl;
    return 0;
}