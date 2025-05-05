#include <iostream>
using namespace std;
#include <string>

class siswa;
class orang
{
    private:
    string nama;

    public:
    void setNama(string pNama);
    friend class siswa;
};

class siswa 
{
    private:
    int id;

    public:
    void setId(int pId);
    void displayALL(orang &a)
}