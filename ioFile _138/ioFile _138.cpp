#include <fstream>				// tipe data input output file --> membaca, menulis, dan membaca informasi dari file
#include <iostream>
#include <string>
using namespace std;

int main() {
	string baris;

	// membuka file dalam mode menulis.
	ofstream outfile;
	// menunjuk ke sebuah nama file
	outfile.open("contohfile.txt");

	cout << ">= Menulis file, \'q' untuk keluar" << endl;

	