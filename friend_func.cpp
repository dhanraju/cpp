/* Friend Function */
/*
   A friend function of a class is defined outside that class scope but it has
   the right to access all private and protected members of the class.
   Even thought the prototypes for friend functions appear in the class
   definition, friends are not member functions.
*/

#include <iostream>
using namespace std;

class Box {
    double width;
    public:
        friend void printWidth(Box box);
        void setWidth(double wid);
};

void Box::setWidth(double wid) {
    width = wid;
}

void printWidth(Box box) {
    cout << "Width of box : " << box.width << endl;
}


int main() {
    Box box;
    box.setWidth(10.0);
    printWidth(box);
    return 0;
}
