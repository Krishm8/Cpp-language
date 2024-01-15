#include<iostream>
using namespace std;
class A{
    public:
    void saw(){
        cout << "I am A" << endl;
    }
};
class B : public A{
    public:
    void saw(){
        cout << "I am B"<< endl;
    }
};

class C : public B{
};
int main(){
    C c;   
    c.A::saw();
    c.B::saw();
    
    return 0;
}