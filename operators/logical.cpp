#include <iostream>
using namespace std;

int main(){
    int x = 10;

    cout << "Nilai dari (x < 50 && x < 15) : " << (x<50 && x<15) << endl; // && (and) hanya akan mengembalikan nilai 1 (true) jika kedua kondisi bernilai benar, jika tidak maka akan mengembalikan nilai 0 (false)
    cout << "Nilai dari (x < 50 || x > 15) : " << (x<50 || x>15) << endl; // || (or) akan bernilai 1 (true) jika salah satu kondisi bernilai benar, jika tidak maka akan mengembalikan nilai 0
    cout << "Nilai dari !(x < 50 && x < 15) : "<< !(x<50 && x<15) << endl; // ! (not) akan mengembalikan nilai kebalikan, jika kondisi bernilai 0 (false) maka akan mengembalikan nilai 1 (true), jika kondisi bernilai 1 (true) maka akan mengembalikan nilai 0 (false)
}