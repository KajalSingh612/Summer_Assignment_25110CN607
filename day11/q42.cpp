//wap to write function to find maximum
#include <iostream>
using namespace std;

int findMaximum(int a, int b) {
    return (a > b) ? a : b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Maximum: " << findMaximum(num1, num2) << endl;
    return 0;
}