#include "baitap.h"
void menu()
{
	char s[50];
	int luachon;
	cout << endl << "-----------------------MENU--------------------------" << endl;
	cout << "0_Thoat" << endl << "1_Bai 1" << '\n' << "2_Bai 2" << '\n' << "3_Bai 3" << '\n' << "4_Bai 4" << '\n' << "5_Bai 5" << '\n' << "6_Bai 6" << '\n' << "7_Bai 7" << '\n' << "8_Bai 8" << '\n' << "9_Bai 9" << '\n';
	cout << "NHAP LUA CHON" << endl;
	cin >> luachon;
	if (luachon>=0&&luachon<=9)
	{
		cin.ignore();
		cout << "nhap mot chuoi bat ki: ";
		cin.getline(s, 50 + 1);
		int n = strlen(s);
		switch (luachon)
		{
		case 0: break;
		case 1: { bai1(s, n); break;}
		case 2: { bai2(s, n); break;}
		case 3: { bai3(s, n); break;}
		case 4: { bai4(s, n); break;}
		case 5: { bai5(s, n); break;}
		case 6: { bai6(s, n); break;}
		case 7: { bai7(); break;}
		case 8: { bai8(); break;}
		case 9: { bai9(s, n); break;}
		}
		cout << endl << endl;
	} 
	else {cout << "BAN DA NHAP SAI. MOI NHAP LAI..." << endl;}
}
int main()
{
	menu();
	return 0;
}