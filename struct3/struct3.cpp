#include <iostream>

using namespace std;
struct AlamatDetail
{
	char desa[20];
	char kota[20];
};

struct Mahasiswa {
	char nim[12];
	char nama[20];
	AlamatDetail alamat;
	int umur;
};

int main() {

	Mahasiswa mhs[3];

	for (int i = 0; i < 3; i++)
	{
		cout << "Masukkan nim: ";
		cin.getline(mhs[i].nim, 12);
		cout << "Masukkan umur: ";
		cin >> mhs[i].umur;
		cin.ignore(1, '\n');
		cout << "Masukkan nama: ";
		cin.getline(mhs[i].nama, 20);
		cout << "Alamat: " << endl;
		cout << "\tMasukan desa : ";
		cin.getline(mhs[i].alamat.desa, 20);
		cout << "\tMasukan kota : ";
		cin.getline(mhs[i].alamat.kota, 20);
	}

	for (int i = 0; i < 3; i++)
	{
		cout << "\nNim : " << mhs[i].nim;
		cout << "\numur : " << mhs[i].umur;
		cout << "\nnama : " << mhs[i].nama;
		cout << "\nalamat : ";
		cout << "\ndesa : " << mhs[i].alamat.desa;
		cout << "\nkota : " << mhs[i].alamat.kota;
	}
}
