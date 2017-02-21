#include "basic_class.h"

BasicClass::BasicClass(int initialValue) {
    storedValue = initialValue;
}

int BasicClass::read() const {
    return storedValue;
}

void BasicClass::write( int x ) {
    storedValue = x;
}

