#include <iostream>

using namespace std;

struct AlamatDetail
{
	string desa[20];
	string kota[20];


};

struct Mahasiswa {
	string nim[20];
	string nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs;

	cout << "Masukkan nim: ";
	cin >> mhs.nim;
	cout << "Masukkan nama: ";
	cin >> mhs.nama;
	cout << "Alamat: " << endl;
	cout << "\tNama desa : ";
	cin >> mhs.alamat.desa;
	cout << "\tNama kota: ";
	cin >> mhs.alamat.kota;
	cout << "Masukkkan umur: ";
	cin >> mhs.umur;

	cout << "\nNim : " << mhs.nim;
	cout << "\nnama : " << mhs.nama;
	cout << "\ndesa : " << mhs.alamat.desa;
	cout << "\nkota : " << mhs.alamat.kota;
}
