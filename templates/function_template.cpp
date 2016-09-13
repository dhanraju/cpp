/*
   NOTES ON TEMPLATES:
- A template is a blueprint or formulat for creating a generic class or a
function.
- The library containers like iterators and algorithms are exaples of generic
prog.g and have been developed using template concept.
- There is a single definition of each container, such as vector, but we can
define many different kinds of vectors for example, vector <int> or vector
<string>.
- We can use templates to define functions as well as classes.

Syntax:
template <class type> ret-type func-name(parameter list) {
  // body of function
}

Where:
type- placeholder name for a data type used by function.
 */

#include <iostream>
#include <string>

using namespace std;

template <typename T>
inline T const& Max (T const& a, T const& b) {
    return a < b ? b : a;
}

int main() {
    int i = 39;
    int j = 20;
    cout << "Max(i, j): " << Max(i, j) << endl;

    double f1 = 13.5;
    double f2 = 20.7;
    cout << "Max(f1, f2): " << Max(f1, f2) << endl;

    string s1 = "Hello";
    string s2 = "World";
    cout << "Max(s1, s2): " << Max(s1, s2) << endl;

    return 0;
}


/*
OUTPUT:
Max(i, j): 39
Max(f1, f2): 20.7
Max(s1, s2): World
*/
