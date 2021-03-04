#include "bai1.h"
int main()
{
	phanso a, b;
	nhapps(a);
	rutgon(a);
	xuatps(a);
	cout << endl << endl;
	nhapps(b);
	rutgon(b);
	xuatps(b);
	cout << endl;
	phanso tong = tongps(a, b); rutgon(tong);
	phanso hieu = hieups(a, b); rutgon(hieu);
	phanso thuong = thuongps(a, b); rutgon(thuong);
	phanso tich = tichps(a, b); rutgon(tich);
	cout << endl << "tong hai phan so tren la "; xuatps(tong);
	cout << endl << "hieu hai phan so tren la "; xuatps(hieu);
	cout << endl << "tich hai phan so la "; xuatps(tich);
	cout << endl << "thuong hai phan so la "; xuatps(thuong);
	return 0;
}