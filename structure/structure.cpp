#include <iostream>
using namespace std;

int a, b;

void input()
{
	cout << "bilangan pertama = ";
	cin >> a;

	cout << "bilangan kedua = ";
	cin >> b;
}



int penjumlahan(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}



int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
}


int perkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
}


int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
}

int main()
{
	int pilihan;

	do {
		system("cls");
		cout << "======= Menu =======" << endl;
		cout << "1, Penjumlahan" << endl;
		cout << "1, Pengurangan" << endl;
		cout << "1, Perkalian" << endl;
		cout << "1, Pembagian" << endl;
		cout << "1, Keluar" << endl;
		cout << "Masukkan menu yang ingin di pilih (1/2/3/4/5): " ;
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			input();
			cout << " Hasil penjumlahan = " << penjumlahan(a, b) << endl;
			system("pause");
			break;
		case 2:
			input();
			cout << " Hasil pengurangan = " << pengurangan(a, b) << endl;
			system("pause");
			break;
		case 3:
			input();
			cout << " Hasil perkalian = " << perkalian(a, b) << endl;
			system("pause");
			break;
		case 4:
			input();
			cout << " Hasil pembagian = " << pembagian(a, b) << endl;
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "Menu tidak tersedia silahkan pilih lagi !!!" << endl;
			break;
		}

	} while (pilihan != 5);
}

