#include "bai3.h"
int main()
{
	int n;
	phanso a[100];
	cout << "nhap n=";
	cin >> n;
	nhapmang(a, n);
	rutgonpsmang(a, n);
	xuatmang(a, n);
	if (timphansoduongnhonhat(a, n).tu == -1) cout << endl << "khong co so phan so duong nho nhat" << endl;
	else
		cout << endl << "phan so duong nho nhat trong mang la " << timphansoduongnhonhat(a, n).tu << "/" << timphansoduongnhonhat(a, n).mau << endl;
	if (timphansoamlonnhat(a, n).tu == 1) cout << endl << " khong co phan so am lon nhat" << endl;
	else 
		cout << endl << "phan so am lon nhat trong mang la " << timphansoamlonnhat(a, n).tu << "/" << timphansoamlonnhat(a, n).mau << endl;
	if (phanso_textfile(a, n))
		cout << endl << endl << "Da luu Mang Phan So vao PHANSO.TXT";
	cout << endl;
	return 0;
}