#include "w05.h"
void menu()
{
	
	int lc;
	cout << endl;
	do {
		cout << "------Menu------" << endl << "0_Thoat." << endl << "1_Yeu cau bai 1" << endl << "2_Yeu cau bai 2" << endl << "3_Yeu cau bai 3" << endl << "4_Yeu cau bai 4" << endl << "5_Yeu cau bai 5" << endl << "6_Yeu cau bai 6" << endl << "7_Yeu cau bai 7";
		cout << endl << "Ban chon? ";
		cin >> lc;
		switch (lc) {
		case 0: break;
		case 1: {
			int n;
			cout << "nhap n="; cin >> n;
			cout << "Dap an yeu cau bai 1 " << endl; bai1(n);
			break;
		}
		case 2: {
			int a, b;
			cout << "Nhap a=";
			cin >> a;
			cout << "Nhap b=";
			cin >> b;
			cout << "Dap an yeu cau bai 2 " << endl; bai2(a,b);
			break;
		}
		case 3: {
			int a, b, c;
			cout << "Nhap a=";
			cin >> a;
			cout << "Nhap b=";
			cin >> b;
			cout << "Nhap c=";
			cin >> c;
			cout << "Dap an yeu cau bai 3 " << endl; bai3(a, b, c);
			break;
		}
		case 4: {
			
			int n;
			cout << "nhap mot so nguyen duong n" << endl;
			cin >> n;
			cout << "Dap an yeu cau bai 4 " << endl;
			if (ktsodao(n) == 1) cout << n << " la mot so doi xung";
			else cout << n << " khong la so doi xung";
			cout << endl;
			ktrasapxep(n);
			cout << endl;
			cout << "chu so nho nhat la " << min(n) << endl << "chu so lon nhat la " << max(n);
			break;
		}
		case 5: {
			cout << "Dap an yeu cau bai 5 " << endl << "Khong hieu de bai 5";
			break;
		}
		case 6: {
			int n;
			cout << "nhap so phan tu ";
			cin >> n;
			cout << "Dap an yeu cau bai 6 " << endl; bai6(n);
			break;
		}
		case 7: {
			cout << "Dap an yeu cau bai 7 " << endl; bai7();
			break;
		}
		default: cout << "Moi nhap lai..." << endl;
		}
	} while (lc != 0);
}
int main()
{
	menu();
	return 0;
}