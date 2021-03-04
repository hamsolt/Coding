#include "hallo3.h"
int main()
{	
	int n;
	cout << "nhap mot so nguyen duong n" << endl;
	cin >> n;
	if (ktsodao(n) == 1) cout << n << " la 1 so Palindrom";
	else cout << n << " khong la so Palindrom";
	cout << endl;
	tim();
	cout << endl;
	cauc(n);
	return 0;
}