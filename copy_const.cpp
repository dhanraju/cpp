#include <iostream>
using namespace std;

class Line {
    public:
        int getLength(void);
        Line(int len);
        Line(const Line &obj);
        ~Line();

    private:
        int *ptr;
};

Line::Line(int len){
    cout << "Normal constructor allocation ptr" << endl;
    ptr = new int;
    *ptr = len;
}

Line::Line(const Line &obj) {
    cout << "Copy constructor allocating ptr." << endl;
    ptr = new int;
    *ptr = *obj.ptr; /* Copy the value */
}

Line::~Line(void) {
    cout << "Freeing memory!" << endl;
    delete ptr;
}

int Line::getLength(void) {
    return *ptr;
}

void display(Line obj) {
    cout << "Lenght of line : " << obj.getLength() << endl;
}


int main() {
    cout << "at : " << __LINE__ << endl;
    Line line1(10);
    cout << "at : " << __LINE__ << endl;
    display(line1); /* This invokes copy constructor. */

    cout << "at : " << __LINE__ << endl;
    Line line2 = line1; /* This invokes copy constructor. */
    display(line2); /* This invokes copy constructor. */
    cout << "at : " << __LINE__ << endl;

    return 0;
}

/* Ref: http://www.tutorialspoint.com/cplusplus/cpp_copy_constructor.htm */
