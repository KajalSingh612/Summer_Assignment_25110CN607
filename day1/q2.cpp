//wap to print multiplication table of a given number
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter a positive integer: ";
    cin >> num;

    cout << "Multiplication table of " << num << " is:" << endl;
    for (int i = 1; i <= 10; ++i)
    {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}