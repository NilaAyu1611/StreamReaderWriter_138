#include <iostream>
#include <exception>
// untuk obyek excepton yang akan digunkana
#include <array>
//untuk obyek array yang kan kita gunakan 
using namespace std;

int main()
{
	cout << " Awal Program" << endl;			// penanda 1:...
	try {
		array<int, 3> data = { 1,2,3 };
		// pesan array integer 3 elemen
		// cout<< data.at(5)<< endl;
		// memanggil array elemen ke 5
	}
	catch (exception &e) {
		// penangkap menggunkan obyek  exeception
		cout << e.what() << endl;
		/*akan dieksekuis karena array data hanya memiliki 3 lemeen*/
	}
	cout << "Baris Program Yang terakhit" << endl;
	/*pennanda 2: bahwa program berjalan tanpa berhenti meskipun terjadi kesalahan*/

	return 0;
}
