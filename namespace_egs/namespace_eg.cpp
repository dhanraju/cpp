/*
   NOTES ON NAMESPACE
   For eg: we might be writing some code that has a function called xyz() and
   there is another library available which is also having same function xyz().
   Now the compiler has no way of knowing which version of xyz() function we are
   referring to within our code.
   A namespace is designed to overcome this difficulty and is used as additional
   information to differentiate similar functions, classes, variable etc. with
   the same name variable in different libraries. Namespace defines a scope.
*/
#include <iostream>
using namespace std;

// First name space
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}

// Second name space
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}

int main(){
    first_space::func();
    second_space::func();
    return 0;
}

/* OUTPUT:
   Inside first_space
   Inside second_space
*/
