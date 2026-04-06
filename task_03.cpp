#include<iostream>
using namespace std;

int multiply(int &a,int &b);

int main() {

    int x = 5, y = 6;

    cout << "The Product is: " << multiply(x, y) << endl;

    return 0;
}

int multiply(int &a,int &b) {

    return a * b;
}
