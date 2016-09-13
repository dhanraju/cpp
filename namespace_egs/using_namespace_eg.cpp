/*
   NOTES ON using DIRECTIVE:
   "using" is as directive used to avoid prepending of namespaces.
   */

#include <iostream>
using namespace std;

// first name space
namespace first_space {
    void func() {
        cout << "Inside first_space" << endl;
    }
}

// second name space
namespace second_space {
    void func() {
        cout << "Inside second_space" << endl;
    }
}


using namespace first_space;
int main(){
    func();
    return 0;
}

/*
OUTPUT:
Inside first_space
*/
