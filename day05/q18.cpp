//wap to check strong number
#include <iostream>
using namespace std;
int main() {
    int num, originalNum, remainder, result = 0;
    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (originalNum != 0) {
        remainder = originalNum % 10;
        int factorial = 1;
        for (int i = 1; i <= remainder; ++i) {
            factorial *= i;
        }
        result += factorial;
        originalNum /= 10;
    }

    if (result == num) {
        cout << num << " is a strong number." << endl;
    } else {
        cout << num << " is not a strong number." << endl;
    }

    return 0;
}