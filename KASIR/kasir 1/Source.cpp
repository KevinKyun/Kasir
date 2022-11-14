#include <iostream>
#include <stdlib.h>

using namespace std;

int main()
{
	int number, n;
	int total = 0;
	char ask;
	int price[5] = { 3000,6000,9000,12000,15000 };

	retry:

	cout << "================================================" << endl;
	cout << "       LIST                                     " << endl;
	cout << "================================================" << endl;
	cout << "Nama Produk                   \t||Harga         " << endl;
	cout << "1. Ayam Goreng             \t||Rp.3000       " << endl;
	cout << "2. Bebek Goreng            \t||Rp.6000   " << endl;
	cout << "3. Es Teh                  \t||Rp.9000    " << endl;
	cout << "4. Ikan Goreng             \t||Rp.12000 " << endl;
	cout << "5. Nasi padang             \t||Rp.15000 " << endl;


	cout << "Masukan apa yang kamu ingin beli : "; cin >> number;

	switch (number)
	{
		case 1:
			cout << "Maukan berapa banyak yang kamu ingin beli : "; cin >> n;
			total += price[0] * n;
			cout << "Apa kamu ingin membeli yang lain ? (y/t) "; cin >> ask;
			if (ask == 'y')
			{
				system("cls");
				goto retry;

			}
			else
				goto end;
		case 2:
			cout << "Maukan berapa banyak yang kamu ingin beli : "; cin >> n;
			total += price[1] * n;
			cout << "Apa kamu ingin membeli yang lain ? (y/t) "; cin >> ask;
			if (ask == 'y')
			{
				system("cls");
				goto retry;

			}
			else
				goto end;
		case 3:
			cout << "Maukan berapa banyak yang kamu ingin beli : "; cin >> n;
			total += price[2] * n;
			cout << "Apa kamu ingin membeli yang lain ? (y/t) "; cin >> ask;
			if (ask == 'y')
			{
				system("cls");
				goto retry;

			}
			else
				goto end;

		case 4:
			cout << "Maukan berapa banyak yang kamu ingin beli : "; cin >> n;
			total += price[3] * n;
			cout << "Apa kamu ingin membeli yang lain ? (y/t) "; cin >> ask;
			if (ask == 'y')
			{
				system("cls");
				goto retry;

			}
			else
				goto end;
		case 5:
			cout << "Maukan berapa banyak yang kamu ingin beli : "; cin >> n;
			total += price[4] * n;
			cout << "Apa kamu ingin membeli yang lain ? (y/t) "; cin >> ask;
			if (ask == 'y')
			{
				system("cls");
				goto retry;

			}
			else
				goto end;
	}
	end:
	cout << "Total uang yang harus kamu bayar adalah =Rp." << total;


}