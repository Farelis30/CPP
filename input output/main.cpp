#include <iostream>
using namespace std;

int main(){
    int x, y;
    x = 3;
    y = 4;

    // cin dan >> adalah sintaks untuk menerima input dari user
    cout << "Masukkan sebuah angka: "; cin >> x;
    cout << "Masukkan angka yang lain: "; cin >> y;

    int hasil;
    hasil = x + y;

    // cout dan << umumnya digunakan bersamaan untuk mencetak sebuah nilai atau teks
    cout << "Jumlah nya adalah: " << hasil << endl;

    // endl adalah sintaks untuk menambah baris baru secara vertikal
    cout << endl;

    // multiinput variabel
    int a, b, c;
    cout << "Masukkan angka 3 yang berbeda dengan spasi sebagai pemisahnya : ";
    cin >> a >> b >> c;
    cout << "nilai ke - 1 = " << a << endl;
    cout << "nilai ke - 2 = " << b << endl;
    cout << "nilai ke - 3 = " << c << endl;
}