#include <iostream>
using namespace std;

class A {
public:
    void speak() {
        cout << "I am A" << endl;
    }
};

class B : public A {
public:
    void speak(){
        cout << "I am B" << endl;
    }
};

class C : public A {
public:
    void speak(){
        cout << "I am C" << endl;
    }
};

int main() {
    A a;
    B b;
    C c;

    a.speak();
    b.speak();
    c.speak();

    return 0;
}
