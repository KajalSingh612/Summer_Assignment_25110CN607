//wap to write function to check perfect number
#include <iostream>
using namespace std;

bool isPerfect(int n) {
    if (n <= 1)
        return false;

    int sum = 1;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            sum += i;
    }

    return sum == n;
}

int main() {
    int n;
    cin >> n;

    if (isPerfect(n))
        cout << "Perfect Number";
    else
        cout << "Not a Perfect Number";

    return 0;
}