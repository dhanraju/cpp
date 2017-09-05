#include <iostream>
using namespace std;

// function to swap 2 numbers with pass by reference values.
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    cout << "Main" << endl;
    int a = 3, b = 5;
    cout << "a = " << a << "\tb = " << b << endl;
    swap(&a, &b);
    cout << "a = " << a << "\tb = " << b << endl;
    return 0;
}
