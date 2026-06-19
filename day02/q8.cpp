//wap to check if a given number is palindrome
#include <iostream>
using namespace std;
int main()
{
    int num, originalNum, reversedNum = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    originalNum = num; 

    while (num != 0)
    {
        int digit = num % 10; 
        reversedNum = reversedNum * 10 + digit; 
        num /= 10; 
    }

    // Check if the original number is equal to the reversed number
    if (originalNum == reversedNum)
        cout << originalNum << " is a palindrome." << endl;
    else
        cout << originalNum << " is not a palindrome." << endl;

    return 0;
}