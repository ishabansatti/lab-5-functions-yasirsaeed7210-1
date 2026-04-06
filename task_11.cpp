#include<iostream>
using namespace std;

double areaSquare(int side) {
    return side * side;
}

double areaRectangle(int length, int width) {
    return length * width;
}

double areaCircle(double r) {
    return 3.14159 * r * r;
}

int main() {

    double s, l, w, r;

    cout << "Enter a side of square: ";
    cin >> s;



    cout << "Enter Length of rectangle: ";
    cin >> l;

    cout << "Enter width of ractangle: ";
    cin >> w;

    cout << "Enter radius of circle: ";
    cin >> r;

    cout << "The area of Square is: " << areaSquare(s) << endl;
    cout << "The area of Rectangle is: " << areaRectangle(l, w) << endl;
    cout << "The area of Circle is: " << areaCircle(r) << endl;

    return 0;
}