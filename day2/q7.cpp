//wap to find product of digits in a given number
#include <iostream>
using namespace std;
int main()
{
    int num, product = 1;
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num != 0)
    {
        product *= num % 10; 
        num /= 10;           
    }

    cout << "Product of digits in the given number is: " << product << endl;
    return 0;
}