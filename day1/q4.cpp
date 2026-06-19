//wap to count digits in a given number
#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;
    cout << "Enter a positive integer: ";
    cin >> num;

    while (num != 0)
    {
        num /= 10; 
        ++count;   
    }

    cout << "Number of digits in the given number is: " << count << endl;
    return 0;
}