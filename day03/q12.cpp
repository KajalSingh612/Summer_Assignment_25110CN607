//wap to find LCM of two numbers
#include <iostream>
using namespace std;
int main() {
    int num1, num2, lcm;

    cout << "Enter two positive integers: ";
    cin >> num1 >> num2;

    lcm = (num1 > num2) ? num1 : num2; 

    while (true) {
        if (lcm % num1 == 0 && lcm % num2 == 0) {
            break;
        }
        ++lcm;
    }

    cout << "LCM of " << num1 << " and " << num2 << " is: " << lcm;

    return 0;
}