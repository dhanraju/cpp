#include <string>
#include <iostream>
#include "basic_class.h"
using namespace std;

template <typename Comparable>
const Comparable & findMax( const vector<Comparable> & a ) {
    int maxIndex = 0;

    for (int i=1; i < a.size(); ++i)
	if( a[maxIndex] < a[i])
	    maxIndex = i;
    return a[maxIndex];
}

int main() {
    vector<int> v1(37);
    vector<double> v2(40);
    vector<string> v3(80);
    vector<BasicClass> v4(75);

    cout << findMax(v1) << endl;
    cout << findMax(v2) << endl;
    cout << findMax(v3) << endl;
    cout << findMax(v4) << endl;

    return 0;
}
