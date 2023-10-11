#include <iostream>
using namespace std;

int main(){
    int x, y;
    x = 10;
    y = 20;


    cout << "Nilai x == y : " << (x==y) << endl;  // jika nilai sama maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
    cout << "Nilai x != y : " << (x!=y) << endl; // jika nilai tidak sama maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
    cout << "Nilai x > y : " << (x>y) << endl; // jika nilai variabel kiri lebih besar dari sebelah kanan maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
    cout << "Nilai x < y : " << (x<y) << endl; // jika nilai variabel kiri lebih kecil dari sebelah kanan maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
    cout << "Nilai x >= y : " << (x>=y) << endl; // jika nilai variabel kiri lebih besar sama dengan dari sebelah kanan maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
    cout << "Nilai x <= y : " << (x<=y) << endl; // jika nilai variabel kiri lebih kecil sama dengan dari sebelah kanan maka akan mengembalikan boolean 1 (true) jika tidak akan mengembalikan nilai 0 (false)
}