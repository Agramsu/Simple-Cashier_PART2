// Program Perhitungan Kasir

#include <iostream>
#include <iomanip>
#include <string>
#include <Windows.h>
#include "Header.h"

using namespace std;

void daftar_produk();
void menampilkan_daftar_produk();
void harga_barang();
void history_belanja();
void tampilan();
void login();
void menu();
void keluar();
void garis_horizontal(int len);
void garis_vertikal(int len);

const int x = 100;
int y = 100;
string produk[x];
int counter = 0;
int price = 0;
int addition = 0;
int total = 0;
int value = 0;
int pay;
int harga[x];
int jumlah[x];
int tot_harga[x];



string nama_produk[] = { "Apel", "Mangga", "Stroberi" , "Kain Pel", "Sapu Ijuk", "Teh Botol", "Coca-Cola", "Fanta" };
int harga_produk[] = {20000, 15000, 24000, 10000, 15000, 5000, 7500, 7500};

void garis_horizontal(int len)
{
	for (int line = 0; line < len; line++)
	{
		cout << char(205);
	}
}

void garis_vertikal(int line)
{
	for (int vertikal = 0; vertikal < line; vertikal++)
	{
		cout << char(186) ;
		cout << endl;
	}
}


int main()
{
	tampilan();
	
	system("pause");
	return 0;
}

void tampilan()
{
	//Menampilkan home page  
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMWWXd:;dKWMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMWX0XWMMMMN0xoc,,,;cd0NWMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMN0xc;cOWWKkl;,,,,,,,,,;lxKWMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMWKkl;,:lxxxo:,,,,,,,,;:lol:,:okXWMMMMMMMMM" << endl;
	cout << "MMMMMWNOo:,;cdxdl;,,,,,,,,,:ldxkkkxoc;;:dOXWMMMMMM" << endl;
	cout << "MMMN0xc;;:oxxo:,',,,,,,;cldOXKOxxdoloooc;;cxNMMMMM" << endl;
	cout << "WKkl;,,:dkkkxc,'',,,;:oOXNNWMMWXkc,',;codlcxNMMMMM" << endl;
	cout << "Xl,,,,,:xOxxkOOl,,;lkKNWMMMMMMW0c,',,,,,:okXMMMMMM" << endl;
	cout << "Nx,,,,,,lkOKNWMXkx0XWWWWWWWMMMW0o:,,,,,,,,;lkXWMMM" << endl;
	cout << "MXl,,,,,;oKWMMMMMWWNXK00000KXNWWNKko:,,,,,,,,:dONW" << endl;
	cout << "MWO:,,,,,:xXMMMMWNKOkkkxxxxkkOKNWWWN0xl;,,,,,,,,cx" << endl;
	cout << "MMNx,,,,,,l0NMMWX0kxxxxxxxxxxxk0XWMMWWXOdc;,,,,,,;" << endl;
	cout << "KO0Oc,,,,,;dKWMWKOkxxxdddddxxxxOKNMMMMMWKkdl:,,,;x" << endl;
	cout << "c;ckd;,,,,,:kNWNKOkxxxdooodxxxxO0NMMMMMNOdkOkc,,lK" << endl;
	cout << "d;;okl,',,',c0WWX0kxxxxxxxxxxxkOXWWKO0KOxdxOxc,:OW" << endl;
	cout << "Kl,:dx:,,;ldOXWMWX0Okkxxxxxxkk0XNW0l,,;;:cxkl,;xNM" << endl;
	cout << "WO:,cxxood0WMMMMMWNXK0OOOOO0KXNWWXd;,,''':xd:,lKMM" << endl;
	cout << "MNx;,lkOkxkXWWWWWWWWNNXXNNNWWMMMNk:,,,,',oxc,:OWMM" << endl;
	cout << "MMKl,;lddoodddddddddddod0NWMMMMW0l,,,,,,lko;;dNMMM" << endl;
	cout << "MMWOc,,,,,,,,,,,,,,,,,',dXNMMMWKd;,,,,,cO0xldKMMMM" << endl;
	cout << "MMMNx;,,,,,,,,,,,,,,,,',lkO0000x:,,,,,:OWMWWWMMMMM" << endl;
	cout << "MMMMXo;;;;;;;;;;;;;;;;;;cddxxkkl,,,,,,dNMMMMMMMMMM" << endl;
	cout << "MMMMWNKKKKKKKKKKkdxxdxxxxkkkkko;,,,,,lKMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMNx:::::::::::::;,,,,,:OWMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMM:;;;;;;;;;;;;;,,,,,MMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl;
	cout << "MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM" << endl << endl;

	cout << endl;
	cout << endl;

	cout << "**** **** *        *     **   **     *     *****     ***       *     *****     *     *   *  ****" << endl;
	cout << "*    *    *       * *    * * * *    * *      *       *  *     * *      *      * *    **  * *" << endl;
	cout << "**** **** *      *   *   *  *  *   *   *     *       *   *   *   *     *     *   *   * * * *****" << endl;
	cout << "   * *    *     *******  *     *  *******    *       *  *   *******    *    *******  *  ** *   *" << endl;
	cout << "**** **** **** *       * *     * *       *   *       ***   *       *   *   *       * *   *  ***" << endl;

	cout << endl;

	cout << "                                              ***   *" << endl;
	cout << "                                              *  *  *" << endl;
	cout << "                                              *   * *" << endl;
	cout << "                                              *  *  *" << endl;
	cout << "                                              ***   *" << endl;

	cout << endl;
	cout << endl;

	  
	cout << "               *     ***   *   * *   *     *     *    **   **     *     ****  *****" << endl;
	cout << "              * *    *  *  *   * *   *    * *    *    * * * *    * *    *   *   *" << endl;
	cout << "             *   *   *   * *   * *****   *   *   *    *  *  *   *   *   ****    *" << endl;
	cout << "            *******  *  *  *   * *   *  *******  *    *     *  *******  *  *    *" << endl;
	cout << "           *       * ***    ***  *   * *       * *    *     * *       * *   *   *" << endl;


	cout << endl;
	cout << endl;

	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;
	cout << "" << endl;


	


	cout << " " << endl;
	
	cout << "|=========================================================================================================================|" << endl;
	cin.get();
	system("cls");
	login();
}

void login()
{
	string username, password;
	set_xy(30, 8);
	cout << "Username : ";
	getline(cin, username);
	set_xy(30, 9);
	cout << "Password : ";
	getline(cin, password);
	if (username == "amikom" )
	{
		if (password == "123")
		{
			set_xy(30, 11);
			cout << "Please wait...\n";
			set_xy(30, 13);
			for (int c = 0; c < 15; c++)
			{
				cout << char(219);
				Sleep(500);
			}
			cout << endl;
			set_xy(30, 15);
			cout << "Login Anda Berhasil" << endl;
			cin.get();
			system("cls");
			menu();
		}
		else
		{
			set_xy(30, 11);
			cout << "Please wait...\n";
			set_xy(30, 13);
			for (int c = 0; c < 15; c++)
			{
				cout << char(219);
				Sleep(500);
			}
			cout << endl;
			set_xy(30, 15);
			cout << "False Password" << endl;
			cin.get();
			system("cls");
			login();
		}
	}
	else {
		set_xy(30, 11);
		cout << "Please wait...\n";
		set_xy(30, 13);
		for (int c = 0; c < 15; c++)
		{
			cout << char(219);
			Sleep(500);
		}
		cout << endl;
		set_xy(30, 15);
		cout << "False Username" << endl;
		cin.get();
		system("cls");
		login();
	}
}

void menu()
{
	int f;
	set_xy(30, 2);
	cout << "Selamat Datang Di \n\n";
	set_xy(30, 4);
	cout << "Aduhai Mart\n\n";
	cout << endl << endl;
	cout << "Apa yang akan anda lakukan ? ";
	set_xy(3, 10);
	cout << "1. Menghitung Belanjaan";
	set_xy(3, 12);
	cout << "2. Keluar Program" << endl;
	cin >> f;

	if (f == 1)
	{
		system("cls");
		daftar_produk();
	}
	else if (f == 2)
	{
		system("cls");
		keluar();
	}

	
	
}

void daftar_produk()
{
	system("cls");
	int a, masuk;
	int hargasementara;

	set_xy(4, 5);
	garis_horizontal(50);
	set_xy(3, 5);
	cout << char(201);
	
	set_xy(5, 6);

	cout << "No\t\t\t" << "Harga \t\t" << "Nama Barang\t\t" ;
	set_xy(54, 5);
	cout << char(187);
	cout << endl << endl;
	for (int n = 0; n < 8; n++)
	{
		cout << setw(7) << n + 1 << setw(22) << harga_produk[n] << setw(18) << nama_produk[n];
		cout << endl;
	}
	set_xy(3, 17);
	cout << char(200);
	set_xy(4, 17);
	garis_horizontal(50);
	set_xy(54, 17);
	cout << char(188);
	cout << endl << endl;

	cout << "CATATAN !!! TEKAN ANGKA 9 UNTUK MELAKUKAN PEMBAYARAN\n\n\n";

	cout << endl;
	

	for (int g = 0; g < x; g++)
	{
		cout << "Barang : ";
		cin >> a;
		if (a != 0)
		{
			produk[counter] = nama_produk[g];
			counter++;
			harga[price] = harga_produk[g];
			price++;

		}
		else if (a == 0)
		{
			break;
		} else{}

		cout << "Jumlah : ";
		cin >> masuk;
		jumlah[addition] = masuk;
		addition++;

		cout << endl;
		for (int s = 0; s < counter; s++)
		{
			hargasementara = (harga[s] * masuk);
			tot_harga[value] = tot_harga[value] + hargasementara;
		}
	}
	
	
	cin.get();
	system("cls");

	menampilkan_daftar_produk();
}


void menampilkan_daftar_produk()
{

	set_xy(26, 2);
	cout << "Aduhai Mart" << endl << endl;
	set_xy(5, 6);
	cout << "No\t\t" << "Nama Barang\t\t" << "Jumlah\t\t" << "Harga Per-item atau Per-Kg\t\t" << endl;

	for (int h = 0; h < counter; h++)
	{
		cout << setw(7) << h + 1 << setw(19) << produk[h] << setw(18) << jumlah[h] << setw(18) << harga[h];
		cout << endl;
	}

	set_xy(38, 9);
	cout << "Total Harga	 " << (tot_harga[value]) << endl << endl;
	cout << "__________________________________________________________________________" << endl;
	cout << endl << endl;

	cin.get();
	harga_barang();
}

void harga_barang()
{
	int k;

	cout << "Pembayaran		: ";
	cin >> pay;
	cout << endl;


	cout << "Pembayaran		: " << "Rp." << pay << endl;
	cout << "Sisa			: " << "Rp." << (pay-tot_harga[value]) << endl;
	cout << endl;
	cout << "===========================================================================" << endl;
	cout << "\t\t\tTerima Kasih Telah Berkunjung\n\n\n\n\n";

	
	cout << "Silahkan Pilih !!" << endl << endl;
	cout << "1. Melihat History" << endl;
	cout << "2. Keluar program" << endl;
	
	cin >> k;
	if (k == 1)
	{
		
		history_belanja();
	}
	else if (k == 2)
	{
		system("cls");
		keluar();
	} 
	else {}


}

void history_belanja()
{

	
	set_xy(5, 4);
	cout << "No\t\t" << "Total Pendapatan\n\n";
	for (int r = 0; r < 1; r++)
	{
		cout << setw(5) << r + 1 << setw(22) << tot_harga[r] <<  endl;
	}
	cout << endl << endl;

	cin.get();
	keluar();
}

void keluar()
{
	
}