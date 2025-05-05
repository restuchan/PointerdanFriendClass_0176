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

   