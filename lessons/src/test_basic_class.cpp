#include <iostream>
#include "basic_class.h"
using namespace std;

int main(){
    BasicClass m;
    cout << "Cell contents: " << m.read() << endl;
    m.write(5);
    cout << "Cell contents: " << m.read() << endl;
    return 0;
}
