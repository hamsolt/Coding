#include "w6.h"
void menu()
{
	
	int a[100],b[100], n,m;
	
	int lc;
	
	do {
	
		cout << endl << "-----Menu-----" << endl << "0_Thoat" << endl;
		cout << "1_Yeu cau bai 1" << endl << "2_Yeu cau bai 2" << endl << "3_Yeu cau bai 3" << endl << "4_Yeu cau bai 4" << endl << "5_Yeu cau bai 5" << endl << "6_Yeu cau bai 6" << endl << "7_Yeu cau bai 7" << endl << "8_Yeu cau bai 8" << endl << "8_Yeu cau bai 8" << endl << "9_Yeu cau bai 9" << endl;
		cout << "nhap yeu cau: ";
		cin >> lc;
		switch (lc)
		{
		case 0: break;
		case 1: {
			nhapmang(a, n);
			bai1(a, n);
			break;
		}
		case 2: {
			nhapmang(a, n);
			bai2(a, n);
			break;
		}
		case 3: {
			nhapmang(a, n);
			bai3(a, n);
			break;
		}
		case 4: {
			nhapmang(a, n);
			bai4(a, n);
			break;
		}
		case 5: {
			nhapmang(a, n);
			bai5(a, n);
			break;
		}
		case 6: {
			cout << "nhap n" << endl;
			cin >> n;
			cout << "chuyen n sang he nhi phan la ";
			bai6(n);
			cout << endl;
			break;
		}
		case 7: {
			bai7();
			break;
		}
		case 8: {
			nhapmang(a, n);
			bai8(a, n);
			break;
		}
		case 9: {
			nhapmang(a, n);
			nhapmang(b, m);
			bai9(a, n, b, m);
			break;
		}
		default: cout << "Moi nhap lai.....";
		}
		cout << endl << endl;
	} while (lc != 0);
}

int main()
{
	menu();
}