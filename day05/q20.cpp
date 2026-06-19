//wap to find largest prime factor of a number
#include <iostream>
using namespace std;
int main()
 {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    int largestPrimeFactor = 1;

    for (int i = 2; i <= num; i++) {
        if (num % i == 0) {
            int temp = i;
            bool isPrime = true;
            for (int j = 2; j <= temp / 2; j++) {
                if (temp % j == 0) {
                    isPrime = false;
                    break;
                }
            }
            if (isPrime) {
                largestPrimeFactor = temp;
            }
        }
    }

    cout << "The largest prime factor of " << num << " is " << largestPrimeFactor << endl;

    return 0;
}