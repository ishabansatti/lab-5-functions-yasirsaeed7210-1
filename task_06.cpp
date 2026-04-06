#include<iostream>
using namespace std;

int main() {

    int counter = 0;

    auto increment = [&counter]() {

        counter++;
        cout << "Counter = " << counter << endl;

    };

    increment();
    increment();
    increment();

    return 0;
}