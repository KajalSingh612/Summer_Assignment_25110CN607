//wap to recursive reverse number
#include <iostream>
#include <cmath>
using namespace std;

int reverseNumber(int n) {
    if (n == 0) {
        return 0;
    } else {
        return (n % 10) * (int)(pow(10, (int)log10(n))) + reverseNumber(n / 10);
    }
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Reverse of " << num << " is " << reverseNumber(num) << endl;
    return 0;
}