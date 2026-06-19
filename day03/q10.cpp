//wap to print prime numbers in a given range
#include <iostream>
using namespace std;
int main()
 {
    int lower, upper, i;
    bool isPrime;

    cout << "Enter two positive integers (lower and upper range): ";
    cin >> lower >> upper;

    cout << "Prime numbers between " << lower << " and " << upper << " are: ";

    for (int num = lower; num <= upper; num++) {
        if (num <= 1) {
            continue; 
        }
        isPrime = true;
        for (i = 2; i <= num / 2; ++i) {
            if (num % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime)
            cout << num << " ";
    }

    return 0;
}