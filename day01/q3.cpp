//wap to find the factorial of a given number
#include <iostream>
using namespace std;
int main()
{
    int n;
    unsigned long long factorial = 1; // Use unsigned long long to handle large factorials
    cout << "Enter a positive integer: ";
    cin >> n;

    // Check if the number is negative, zero or positive
    if (n < 0)
        cout << "Error! Factorial of a negative number doesn't exist." << endl;
    else
    {
        for (int i = 1; i <= n; ++i)
        {
            factorial *= i; // factorial = factorial * i
        }
        cout << "Factorial of " << n << " = " << factorial << endl;
    }

    return 0;
}