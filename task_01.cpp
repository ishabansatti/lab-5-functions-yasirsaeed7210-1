#include<iostream>
using namespace std;
int square(int n);

int main() {

    cout << "Square of a 7"  << " dis: " << square(7) << endl;
    return 0;
}

int square(int n) {
    return n * n;
}