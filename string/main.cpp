#include <iostream>
using namespace std;

int main(){
    string salam = "hallo";
    string nama = "john";

    cout << salam << endl;

    cout << endl;

    // concatenate string (menghubungkan string)
    cout << salam + " " + nama << endl;
    
    cout << endl;

    // alternate concenate string
    string salam2 = salam.append(" ").append(nama);
    cout << salam2 << endl;

    cout << endl;
    
    // size or length adalah untuk mengetahui panjang dari string   
    cout << "size dari string nama = " << nama.length() << endl;

    // mengakses string
    string myString = "Hallo Dunia";
    cout << endl;
    
    // untuk mengambil satu karakter dari string kita menggunakan tanda [], dan dimulai dari indeks 0 untuk mengambil huruf pertama pada string
    cout << "Huruf pertama dari myString = " << myString[0] << endl;
    cout << "Huruf keenam dari myString = " << myString[6] << endl;

    cout << endl;

    // character spesial pada string
    /*
        \' untuk memberikan kutip satu pada string
        \\ untuk memberikan \ pada string
        \n untuk memberikan baris baru pada string
        \t untuk memberikan tab pada string
    */
   string teks = "Hallo,\tnama saya adalah Monkey D Luffy\\(luffy) \nSalam kenal";
   cout << teks << endl;

   cout << endl;

   // input string
   string namaDepan;
   cout << "Masukkan nama depan anda : ";
   cin >> namaDepan;
   cout << "Nama depan anda adalah : " << namaDepan << endl;

   cout << endl;

   // input line of string
   string namaLengkap;
   cout << "Masukkan nama lengkap anda : ";
   cin.ignore(); // untuk menghilangkan spasi dari user supaya tidak ikut terbaca di getline
   getline(cin, namaLengkap);
   cout << "Nama lengkap anda adalah : " << namaLengkap << endl;
}