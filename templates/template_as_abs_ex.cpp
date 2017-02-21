#include <cassert>
#include <iostream>
// #include <stdlib.h> // Included for abs function (not for meant for user defined
		    // abs template in this file.
using namespace std;

/*void doMath() {
    int myInt = -3;
    int myOtherInt = 3;
    assert (abs(myInt) == abs(myOtherInt));

    double myDouble = 4.0;
    double myOtherDouble = -4.0;
    assert (abs(myDouble) == abs(myOtherDouble));
}*/

template <typename T>
T abs(T myNum) {
    cout << "User defined abs" << endl;
    if (myNum < 0) {
	return -myNum;
    }
    return myNum;
}

int main() {
    // doMath();
    int numInt = 3;
    cout << abs(numInt) << endl;
    cout << abs<double>(-4.0) << endl;
}

/*
   Demonstrating abs lib function with template.
   */
