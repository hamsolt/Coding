#include "W9.h"
int main()
{
	int m, n;
	int a[50][50];
	cout << "Nhap so dong: m = ";
	cin >> m;
	cout << "Nhap so cot: n = ";
	cin >> n;
	nhapmatran(a, m, n);
	xuatmatran(a, m, n);
	cout<<endl<<"tong cac phan tu duong trong ma tran la "<<tongcacphantuduong(a, m, n)<<endl;
	cout << endl << "co tat ca " << demsonguyento(a, m, n) << " so nguyen to trong ma tran" << endl;
	cout << endl << "cac dong co chua gia tri am trong ma tran la: ";
	int i = 0;
	while (i < m)
	{
		int temp = dongchuagiatriam(a, i, n);
		if (temp != -1) cout << temp << '\t';
		i++;
	}
	cout << endl;
	cout<<endl<<"max tren duong cheo chinh la "<<timmaxduongcheochinh(a, m, n)<<endl;
	cout << endl << "max tren duong cheo phu la " << timmaxduongcheophu(a, m, n) << endl;
	cout << endl;
	sapxepduongcheochinhtangdan(a, m, n);
	sapxepduongcheochinhgiamdan(a, m, n);
	return 0;
}