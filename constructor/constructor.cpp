#include <iostream>
using namespace std;

class Mahasiswa
{
    public:
        int nim;
        string nama;

    public:
        Mahasiswa()
        {
            nim = 0;
            nama = "";

        };
        Mahasiswa(int iNim)
        {
            nim = iNim;
            nim = 0;
        };
        Mahasiswa(string iNama)
        {
            nama = iNama;
        };
        Mahasiswa(int iNim, string iNama)
        {
            nim = iNim;
            nama = iNama;
            
        };
       
        void cetak()
        {
            cout << endl << "Nim = " << nim << endl;
            cout << "Nama = " << nama << endl;
        }

};



int main()
{
    Mahasiswa mhs1;
    Mahasiswa mhs2(20);
    Mahasiswa mhs3("Erin Dito ");
    Mahasiswa mhs4(30, "Eko Hidayat ");

    mhs1.cetak();
    mhs2.cetak();
    mhs3.cetak();
    mhs4.cetak();
    
    return 0;
}


