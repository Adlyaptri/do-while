#include <iostream>
using namespace std;

int main()
{
    int no=1, pilihan;
    cout<<"============================\n";
	cout<<"Nama: Adelya Destriana Putri\n";
	cout<<"NIM: 22343033\n";
	cout<<"Membuat Program do while\n";
	cout<<"============================\n";
    cout << "Mau cetak berapa ? ";
    cin >> pilihan;
 do {
  cout << no << "). Aku Suka Koding" << endl;
  no++;
 } while (no <= pilihan);
    return 0;
}
