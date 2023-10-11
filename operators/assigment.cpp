#include <iostream>
using namespace std;

int main(){
    int a,b;
    a = 100;
    b = 50;

    cout << "nilai a = " << a << endl;
    cout << "nilai b = " << b << endl;
    cout << endl;

    a += b; // a = a + b
    cout << "nilai a setelah a += b = " << a << endl;
    cout << endl;

    a -= b; // a = a - b
    cout << "nilai a setelah a -= b = " << a << endl;
    cout << endl;

    a *= b; // a = a * b
    cout << "nilai a setelah a *= b = " << a << endl;
    cout << endl;

    a /= b; // a = a / b
    cout << "nilai a setelah a /= b = " << a << endl;
    cout << endl;
    
    a %= b; // a = a % b
    cout << "nilai a setelah a %= b = " << a << endl;
    cout << endl;
}