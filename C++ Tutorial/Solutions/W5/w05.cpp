#include "w05.h"
int songuyento(int n)
{
	int dem = 0;
	for (int i = 1;i <= n;i++)
	{
		if (n % i == 0) dem++;
	}
	if (dem == 2) return 1;
	else return 0;
}
void bai1(int n)
{
	if (songuyento(n) == 1) cout << n << " la so nguyen to";
	else cout << n << " khong la so nguyen to";
	cout << endl;
	for (int i = 2;i <= n;i++)
	{
		if (songuyento(i) == 1) cout << i << " ";
	}


	cout << endl;
	for (int i = 2;i <= n;i++)
	{
		if (songuyento(i) == 1) cout << i << " ";
		n /= i;
	}
	cout << endl << endl;
}
int bcnn(int a, int b)
{
	int max, kq;
	if (a > 0 && b > 0)
	{
		if (a > b) max = a;
		else max = b;
		while (max > 0)
		{
			if (max % a == 0 && max % b == 0) {
				return kq = max;
				break;
			}
			else max++;
		}
	}

}
int ucln(int a, int b)
{
	return (a * b / bcnn(a, b));
}
void bai2(int a, int b)
{
	cout << "Uoc chung lon nhat la " << ucln(a,b) << endl;
	cout << "Boi chung nho nhat la " << bcnn(a,b) << endl;
}
void bai3(int a, int b, int c)
{
	cout << "Uoc so chung lon nhat cua " << a << ", " << b << ", " << c << ucln(ucln(a, b), c)<<endl;
}
void bai4(int n);
bool ktsodao(int n)
{
	int t = 0, m = n;
	while (n > 0) {
		t = t * 10 + n % 10;
		n /= 10;
	}
	if (t == m) return true;
	else return false;
}
void ktrasapxep(int n)
{
	int st, ss, ktra1 = 0, ktra2 = 0;
	st = n % 10;
	n = n / 10;
	while (n != 0)
	{
		ss = n % 10;
		if (st < ss) { ktra1 = 1; }
		if (st > ss) { ktra2 = 1; }
		st = ss;
		n = n / 10;
	}
	if (ktra1 == 0 && ktra2 == 1) { cout << "cac chu so duoc sap xep tang dan tu trai sang phai" << endl; }
	if (ktra1 == 1 && ktra2 == 0) { cout << "cac chu so duoc sap xep giam dan tu trai sang phai" << endl; }
	if ((ktra1 == 0 && ktra2 == 0) || (ktra1 == 1 && ktra2 == 1)) { cout << "cac chu so khong tang/giam dan tu trai sang phai" << endl;; }
}
float min(int n)
{
	int min = 9;
	while (n > 0)
	{
		int tam = n % 10;
		if (tam < min) min = tam;
		n /= 10;
	}
	return min;
}
float max(int n)
{
	int max = 0;
	while (n > 0)
	{
		int tam = n % 10;
		if (tam > max) max = tam;
		n /= 10;
	}
	return max;
}
void bai5(int n);
void bai6(int n)
{
	int m = n, k;
	while (n > 0) {
		cout << "nhap k=";
		cin >> k;
		int s = 0;
		for (int i = 1;i <= k;i++)
		{
			s = s + k;
		}
		cout << "binh phuong cua " << k << " la " << s << endl;
		n = n - 1;
	}
}
void bai7()
{
	int a, d;
	cout << "Nhap a(>=0)" << endl; cin >> a;
	cout << "Nhap d(>0)" << endl; cin >> d;
	int q, r, tam, i = a;
	while (i > 0) {
		if (i * d <= a) {
			tam = i;
			break;
		}
		i--;
	}

	r = a - tam * d;
	cout << "thuong la " << tam << endl << "so du la " << r<<endl;
}

