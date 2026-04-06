#include<iostream>
using namespace std;

void printType(int x) {
    cout << "Integer Type\n";
}

void printType(double x) {
    cout << "Double Type\n";
}

void printType(char x) {
    cout << "Char Type\n";
}

void printType(string x) {
    cout << "String Type\n";
}

int main() {

    printType(4);
    printType(3.14);
    printType('A');
    printType("Hello");

    return 0;
}