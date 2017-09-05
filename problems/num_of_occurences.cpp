#include <iostream>
using namespace std;

template <class T>
int num_of_occurences(T a) {
    cout << __FUNCTION__ << endl;
    cout << sizeof(a) << "\t" << sizeof(a[0]) << endl;
    /*for (int i=0; sizeof(a)/sizeof(a[0]); i++)
	cout << a[i] << endl;*/
    return 5;
}

int main() {
    cout << "Main" << endl;
    int a[6] = {1, 2, 4, 3, 2, 5};
    cout << num_of_occurences(a) << endl;
    return 0;
}
