#include <iostream>
using namespace std;

int main()
{
	try {
		cout << "Selamat Belajar di Prodi TI UMY" << endl;
		//throw 0.5; // melemparkan sebuah integer maka
		cout << "Pernyataan tidak akan diekskusi" << endl;
	}
	catch (int a) {
		// blok ini kan diekskusi
		cout << " Pengecualian akan dieksekusi" << endl;
	}
	catch (...) {
		/* Jika selain integer maka block ini kaan dieksekusi */
		cout << " default Pengeculaian dieksekusi" << endl;
	}

	return 0;
}

