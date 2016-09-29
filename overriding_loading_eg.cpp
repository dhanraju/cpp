/*
   Over loading -  Functions with same name but differ in arguments.
   Over riding - A derived class function, that changes the definition of base class funcion.
 */
#include <iostream>
using namespace std;

class base{
    public:
    virtual void show(){
        cout << "I am base" << endl;
    }
    /* OVER LOADING show method. */
    void show(int x){
        cout << "I am overloaded" << endl;
    }
};

class derived:public base{
    public:
    /* OVER RIDING show method of base class. */
    void show(){
        cout << "I am derived" << endl;
    }
};

int main(){
    base* b;
    derived d;
    b = &d;
    b -> show();
    b -> show(6);
}

/* OUTPUT
I am derived
I am overloaded
*/
