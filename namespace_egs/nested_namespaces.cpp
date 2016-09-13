/*
   NOTES ON NESTED NAMESPACES:
   Namespaces can be nested where we can define one namespace inside another.
   We can access members of nested namespace by using resultion operators ::.
   */

#include <iostream>
using namespace std;

namespace first_space {
    void func(){
        cout << "Inside first_space" << endl;
    }

    namespace second_space {
        void func(){
            cout << "Inside second_space" << endl;
        }
    }
}


using namespace first_space::second_space;
int main(){
    func();
    return 0;
}

/* OUTPUT
   Inside second_space
   */
