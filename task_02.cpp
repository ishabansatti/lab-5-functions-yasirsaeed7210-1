#include<iostream>
using namespace std;

void swap(int &a, int &b);

int main() {

    int x = 5, y = 7;

    cout << "Values Before Swapping: \n";
    cout << "x = " << x << ", y = " << y << endl;

    swap(x, y);

    cout << "Values After Swapping: \n";
    cout << "x = " << x << ", y = " << y << endl;

    return 0;
}

 void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}