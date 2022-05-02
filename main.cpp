#include <iostream>

using namespace std;

void simpleSwap(int a,  int b) {
    int temp = a;

    a = b;
    b = temp;

    cout << "a = " << a << ", b = " << b << endl;
}

void advancedSwap(int a, int b) {
    a += b;
    b = a - b;
    a -= b;
    cout << "a = " << a << ", b = " << b << endl;
}

int main() {
    cout << "Starting Program!\n";

    simpleSwap(10, 20);
    advancedSwap(10, 20);
}
