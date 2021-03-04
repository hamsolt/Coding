#include "bai3.h"
void nhapmang(phanso a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << "nhap phan so " << i+1 << " = ";
		nhapps(a[i]);
	}
}
void xuatmang(phanso a[100], int n)
{
	for (int i = 0; i < n; i++)
		xuatps(a[i]);
}
void rutgonpsmang(phanso a[100], int n)
{
	for (int i = 0; i < n; i++)
		rutgon(a[i]);
}
bool phanso_textfile(phanso a[100], int n)
{
	ofstream fout;
	fout.open("PHANSO.TXT");
	if (!fout)
	{
		cout << endl << endl << "loi tao tap tin...";
		return false;
	}
	else phanso_to_textfile(fout, a, n);
	return true;
}
void phanso_to_textfile(ofstream& fout, phanso a[100], int n)
{	
	fout << n << endl;
	for (int i = 0; i < n; i++) fout << a[i].tu << "/" << a[i].mau << " ";
	fout << endl;
	fout << timphansoduongnhonhat(a, n).tu << "/" << timphansoduongnhonhat(a, n).mau << endl;
	fout << timphansoamlonnhat(a, n).tu << "/" << timphansoamlonnhat(a, n).mau << endl;
}

phanso timphansoduongnhonhat(phanso a[100], int n)
{
	float min = 1000;
	float temp;
	phanso tam1;
	tam1.tu = -1; tam1.mau = 1;
	for (int i = 0; i < n; i++)
	{
		temp = a[i].tu / a[i].mau;
		if (temp > 0 && temp < min)
		{
			min = temp;
			tam1.tu = a[i].tu;
			tam1.mau = a[i].mau;
		}
	}
	return tam1;
}
	
phanso timphansoamlonnhat(phanso a[100], int n)
{
	float max = -1000;
	phanso tam2;
	tam2.tu = 1; tam2.mau = 1;
	float temp;
	for (int i = 0; i < n; i++)
	{
		temp = a[i].tu / a[i].mau;
		if (temp<0 && temp>max)
		{
			max = temp;
			tam2.tu = a[i].tu;
			tam2.mau = a[i].mau;
		}
	}
	return tam2;
}
void nhapps(phanso& t)
{
	cout << endl << "nhap vao tu so ";
	cin >> t.tu;
	do
	{
		cout << ("Nhap vao mau so ");
		cin >> t.mau;
		if (t.mau == 0)
			cout << ("\nMau phai khac khong\nVui long kiem tra lai");
	} while (t.mau == 0);
	cout << endl;
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
	cout << t.tu << "/" << t.mau << "\t";
}
