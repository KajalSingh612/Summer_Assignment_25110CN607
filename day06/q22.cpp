//wap to convert binary to decimal
#include <iostream>
using namespace std;
int main()
 {
    int binary, decimal = 0, remainder, place = 1;
    cout << "Enter a binary number: ";
    cin >> binary;

    while (binary != 0) {
        remainder = binary % 10;
        decimal += remainder * place;
        place *= 2;
        binary /= 10;
    }

    cout << "Decimal equivalent: " << decimal << endl;
    return 0;
}