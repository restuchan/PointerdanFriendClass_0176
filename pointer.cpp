#include <iostream>
using namespace std;

class Dosen (
    public:
    void tampil nama (){
        cout << "Namanya adalah = " << nama << endl;
    }
);

class staf{
    public:
    int nidn;
}

int main(){
    Dosen ds;
    ds.nama = "Giga";
    ds.tampiNama();

    Dosen &dsref = ds;
    dsref.nama = "Joko";
    cout << "Alamat memori = " << &dsref << endl;
    dsref.tampilNama();

    Dosen *pds = &ds;
    pds->nama = "Reza";
    cout << "Alamat memori = " << pds << endl;
    pds->tampilNama();

    int a = 5;
    int b = 3;
    int *c = &a;
    cout << endl;
    cout << a << endl;

    cout "alamat memori a = " << &a <, endl;
    cout "alamat memori c = " << &c << endl;
    cout "cetak c = " << *c << endl;
    c = &b;
    cout << "alamat memori c = " << c << endl;
    cout << "cetak c = " << *c << encl;
    

   