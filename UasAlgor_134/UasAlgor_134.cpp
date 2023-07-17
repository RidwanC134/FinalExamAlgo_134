#include <iostream>
#include <string>
using namespace std;

// Jawaban saya
const int MAX_MAHASISWA = 100;

int NIM[MAX_MAHASISWA];
string nama[MAX_MAHASISWA];
int tahunMasuk[MAX_MAHASISWA];

int jumlahMahasiswa = 0;

// Jawaban saya
void tambahMahasiswa() {
	if (jumlahMahasiswa < MAX_MAHASISWA) {
		cout << "========== TAMBAH MAHASISWA ==========" << endl;
		cout << "NIM		: ";
		cin >> NIM[jumlahMahasiswa];
		cin.ignore();
		cout << "Nama		: ";
		getline(cin, nama[jumlahMahasiswa]);
		cout << "Tahun Masuk: ";
		cin >> tahunMasuk[jumlahMahasiswa];
		cin.ignore();

		jumlahMahasiswa++;

		cout << "Mahasiswa berhasil ditambahkan!" << endl;
	}
	else {
		cout << "Kapasitas maksimum mahasiswa telah tercapai." << endl;
	}
};

// Jawaban saya
void tampilkanSemuaMahasiswa() {
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data Mahasiswa yang dimasukkan." << endl;
	}
	else {
		cout << "========== DAFTAR MAHASISWA ==========" << endl;
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM		: " << NIM[i] << endl;
			cout << "Nama		: " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
};

// Jawaban saya
void algorithmacariMahasiswaByNIM() {
	int cariNIM;
	bool ditemukan = false;

	cout << "========== CARI MAHASISWA BERDASARKAN NIM ==========" << endl;
	cout << "Masukkan NIM		: ";
	cin >> cariNIM;

	for (int i = 0; i < jumlahMahasiswa; i++) {
		if (NIM[i] == cariNIM) {
			cout << "NIM		: " << NIM[i] << endl;
			cout << "Nama		: " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
			ditemukan = true;
			break;
		}
	}
	if (ditemukan) {
		cout << "Mahasiswa dengan NIM tersebut tidak ditemukan." << endl;
	}
};

// Jawaban saya
void algorithmaSortByTahunMasuk() {
	if (jumlahMahasiswa == 0) {
		cout << "Belum ada data Mahasiswa yang dimasukkan." << endl;
	}
	else {
		cout << "========== DAFTAR MAHASISWA BERDASARKAN TAHUN MASUK ==========" << endl;
		for (int i = 0; i < jumlahMahasiswa - 1; i++) {
			for (int j = i + 1; j < jumlahMahasiswa; j++) {
				if (tahunMasuk[i] > tahunMasuk[j]) {
					
				}
			}
		}
		for (int i = 0; i < jumlahMahasiswa; i++) {
			cout << "NIM		: " << NIM[i] << endl;
			cout << "Nama		: " << nama[i] << endl;
			cout << "Tahun Masuk: " << tahunMasuk[i] << endl;
			cout << endl;
		}
	}
};

int main() {
	int pilihan;
	do {
		cout << "========== MENU MANAJEMEN DATA MAHASISWA ==========" << endl; 
		cout << "1. Tambah Mahasiswa" << endl;
		cout << "2. Tampilkan Semua Mahasiswa" << endl;
		cout << "3. Cari Mahasiswa berdasarkan NIM" << endl;
		cout << "4. Tampilkan Mahasiswa berdasarkan Tahun Masuk" << endl;
		cout << "5. Keluar" << endl;
		cout << "Pilihan: ";
		cin >> pilihan;
		cin.ignore();
		switch (pilihan) {
		case 1:
			//Jawaban saya
			tambahMahasiswa();
			break;
		case 2:
			//Jawaban saya
			tampilkanSemuaMahasiswa();
			break;
		case 3:
			//Jawaban saya
			algorithmacariMahasiswaByNIM();
			break;
		case 4:
			//Jawaban saya
			algorithmaSortByTahunMasuk();
			break;
		case 5:
			cout << "Terima kasih! Program selesai." << endl;
			break;
		default:
			cout << "Pilihan tidak valid. Silakan coba lagi." << endl; cout << endl;
		}
	} while (pilihan != 5);
	return 0;
}

// 2. Looping atau perulangan dan insertionsort

// 3. Stack = Ada push = memasukkan dan pop = mengambil, yang terakhir masuk yang pertama keluar (LIFO)
//	  Queue = Multiple users, satu request yang dapat diproses, yang pertama kali masuk yang diprioritaskan (FIFO)

// 4. Jika undo redo dibatasi, untuk wadahnya bisa menggunakan array. Jika tidak dibatasi, wadahnya bisa menggunakan linked list

// 5. 5
// b. Salah
//	  Benar
//	  Salah