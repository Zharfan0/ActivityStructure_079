#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa[20];
	string kota[20];


};

struct Mahasiswa {
	string nim[14];
	string nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan nim: ";
	cin.getline(mhs[i].nim, 12);
	cout << "Masukkan umur: ";
	cin >> mhs.umur;
	cin.ignore(1, '\n');
	cout << "masukan nama: ";
	cin.getline(mhs.nama, 20);
	cout << "Alamat: ";
	cout << "\tMasukan desa : ";
	cin.getline(mhs.alamat.desa, 20);
	cout << "\tMasukan Kota : ";
	cin.getline(mhs.alamat.kota, 20);


	cout << "\nNim : " << mhs.nim;
	cout << "\numur : " << mhs.umur;
	cout << "\nnama : " << mhs.nama;
	cout << "\nalamat : ";
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
}
