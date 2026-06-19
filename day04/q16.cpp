//wap to print armstrong numbers in a range
#include <iostream>
using namespace std;
int main() {
    int lower, upper;

    cout << "Enter the lower and upper limits: ";
    cin >> lower >> upper;

    cout << "Armstrong numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; ++num) {
        int originalNum = num, remainder, result = 0;

        while (originalNum != 0) {
            remainder = originalNum % 10;
            result += remainder * remainder * remainder;
            originalNum /= 10;
        }

        if (result == num) {
            cout << num << " ";
        }
    }

    return 0;
}