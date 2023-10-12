#include <iostream>
using namespace std;

int main(){

    /*
        array digunakan untuk menampung beberapa nilai dalam 1 variabel dengan tipe yang sama
    */

    // cara membuat array
    int angka[] = {1,2,3,4,5};
    string mobil[4] = {"BMW", "Ferari", "Ford", "Suzuki"};
    /*
        dalam [] bisa ditambahkan nilai didalamnya untuk menentukan berapa banyak item yang bisa
        diisi ke dalam array
    */

    // cara mengakses array
    cout << mobil[0] << endl; // BMW
    cout << mobil[1] << endl; // Ferari
    cout << mobil[2] << endl; // Ford
    cout << mobil[3] << endl; // Suzuki
    cout << endl;
    cout << angka[0] << endl; // 1
    cout << angka[1] << endl; // 2
    cout << angka[2] << endl; // 3
    cout << angka[3] << endl; // 4
    cout << angka[4] << endl; // 5
    cout << endl;

    // cara mendapatkan panjang array
    int getArrayLengthAngka = sizeof(angka) / sizeof(int);
    cout << getArrayLengthAngka << endl;
    int getArrayLengthMobil = sizeof(mobil) / sizeof(string);
    cout << getArrayLengthMobil << endl;

    cout << endl;

    // cara membuat array multidimensi
    string matriksHuruf[2][2] = {
        {"A","B"},
        {"C","D"}
    };

    // cara mengakses array multidimensi
    cout << matriksHuruf[0][0] << endl;
    cout << matriksHuruf[0][1] << endl;
    cout << matriksHuruf[1][0] << endl;
    cout << matriksHuruf[1][1] << endl;
}