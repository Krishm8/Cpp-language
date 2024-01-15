#include <iostream>
using namespace std;
int f(int n) {
    if(n == 0)
        return 1;
    else
        return n * f(n - 1);
}

int main() {
    int num;
    cout << "Enter number : ";
    cin >> num;
    cout << "Factorial is = "<< f(num);
    
    return 0;
}