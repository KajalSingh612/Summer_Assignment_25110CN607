//wap to write function to find the sum of two numbers
#include <iostream>
using namespace std;

int findSum(int a, int b) {
    return a + b;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    cout << "Sum: " << findSum(num1, num2) << endl;
    return 0;
}