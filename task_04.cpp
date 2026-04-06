#include<iostream>
using namespace std;

bool isPrime(int n);

int main() {

    int x;

    cout << "Enter a Number: ";
    cin >> x;

    cout << isPrime(x) ?  " Prime\n" : "Not Prime\n";

    return 0;
}

bool isPrime(int n) {

    if (n <= 1)
        return false;

    for (int i = 2; i <= n / 2; i ++) {

        if (n % i == 0)
            return false;
    }

    return true;
}