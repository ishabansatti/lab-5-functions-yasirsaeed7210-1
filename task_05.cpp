#include<iostream>
using namespace std;

int main() {

    int x = 5;
    int y = 6;

    auto calculate = [x, y]() {

        cout << "Sum is: " << x + y << endl;
        cout << "Product is: " << x * y << endl;

    };

    calculate();

    return 0;
}