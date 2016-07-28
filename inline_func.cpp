/* Inline function */
/*
   If a function is inline, the compiler places a copy of the code of that
   function at each point where the function is called at compile time.

   Any change to an inline function could require all clients of the fuction to
   be recompiled because compiler woule need to replace all the code once again
   otherwise it will continue with old functionality.

   The compiler can ignore the inline qualifier in case defined function is
   morethan a line.
*/

#include <iostream>
using namespace std;

inline int Max(int x, int y) {
    return (x > y)? x : y;
}

int main() {
    cout << "Max (20, 10): " << Max(20, 10) << endl;
    cout << "Max (0, 200): " << Max(0, 200) << endl;
    return 0;
}
