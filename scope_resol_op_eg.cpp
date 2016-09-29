#include <iostream>
using namespace std;

char c = 'a';
/* Below function demonstrates the scope of variable. */
int example01() {
    char c = 'b';

    cout << "Local variable: " << c << endl;
    cout << "Global variable: " << ::c << endl;

    return 0;
}

/* Below class demonstrates the use of scope resolution operator while defining
 * methods. */
class example02 {
    public:
        void output();
};

/* Scope resolution operator used at method definition. */
void example02::output() {
    cout << "Function defined outside the class." << endl;
}

int main() {
    example01();
    example02 x;
    x.output();
    return 0;
}

/* Output:
   Local variable: b
   Global variable: a
   Function defined outside the class. */
