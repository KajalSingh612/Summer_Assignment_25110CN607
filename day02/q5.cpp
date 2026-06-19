//wap to find sum of digits in a given number
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num != 0)
    {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }

    cout << "Sum of digits in the given number is: " << sum << endl;
    return 0;
}