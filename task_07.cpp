#include<iostream>
using namespace std;

int generateId() {

   static int id = 1000;
    id++;
    return id;

}

int main() {
    for (int i = 0; i < 5; i++) {


        cout << "Generated ID = " << generateId() << endl;

    }

    return 0;
}