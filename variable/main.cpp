#include <iostream>
using namespace std;

int main() {
    // int berisi integer(semua angka) tanpa desimal, seperti 111 atau -111
    int a = 123;

    // double berisi pecahan desimal dengan titik ambang, seperti 123,123 atau -123,123
    double b = 123.123;

    // char berisi satu character, seperti 'A' atau 'B'. nilai char harus berada di tengah single quote ('')
    char c = 'C';

    // string berisi kalimat, Seperti "Halo". nilai string harus berada di tengah double quote("")
    string d = "Hallo World";

    // bool berisi boolean yang hanya menyimpan kondisi benar atau salah (true or false)
    bool e = true;

    // deklarasi multi variable
    int f = 5, g = 6, h = 50;
    int i, j, k;
    i = 50;
    j = 60;
    k = 70;

    /*
        penamaan identifier variabel harus memenuhi beberapa syarat:
        - nama bisa berisi huruf, digit, dan underscore
        - nama harus dimulai dengan huruf atau underscore
        - nama bersifat case sensitive 
        - nama tidak boleh berisi spasi atau spesial character seperti !, #, %,dsb
        - keyword C++ seperti int tidak bisa digunakan sebagai nama
    */

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "e = " << e << endl;
    cout << "f g h = " << f << " " << g << " " << h << endl;    
    cout << "i j k = " << i << " " << j << " " << k << endl;    
}
