#include "bai1.h"
void nhapps(phanso& t)
{
	cout << "nhap vao tu so ";
	cin >> t.tu;
	do
	{
		cout << ("Nhap vao mau so ");
		cin >> t.mau;
		if (t.mau == 0)
			cout << ("\nMau phai khac khong\nVui long kiem tra lai");
	} while (t.mau == 0);
}
int UCLN(int a, int b)
{
	a = abs(a);
	b = abs(b);
	while (a != b)
	{
		if (a > b)
			a = a - b;
		else
			b = b - a;
	}
	return a;
}
void rutgon(phanso& t)
{
	int ucln = UCLN(t.tu, t.mau);
	t.tu = t.tu / ucln;
	t.mau = t.mau / ucln;
}
void xuatps(phanso t)
{
	cout << "phan so:  " << t.tu << " / " << t.mau;
}
phanso tongps(phanso a, phanso b)
{
	phanso tong;
	tong.tu = a.tu * b.mau + b.tu * a.mau;
	tong.mau = a.mau * b.mau;
	rutgon(tong);
	return tong;
}
phanso hieups(phanso a, phanso b)
{
	phanso h;
	h.tu = a.tu * b.mau - b.tu * a.mau;
	h.mau = a.mau * b.mau;
	rutgon(h);
	return h;
}
phanso tichps(phanso a, phanso b)
{
	phanso tich;
	tich.tu = a.tu * b.tu;
	tich.mau = a.mau * b.mau;
	rutgon(tich);
	return tich;
}
phanso thuongps(phanso a, phanso b)
{
	phanso thuong;
	thuong.tu = a.tu * b.mau;
	thuong.mau = a.mau * b.tu;
	rutgon(thuong);
	return thuong;
}