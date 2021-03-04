#include "hallo2.h"
int main()
{
	int n;
	cout << "nhap mot so nguyen duong n" << endl;
	cin >> n;
	if (amstrong(n) == 1) { cout << n << " la 1 so Amstrong"; }
	else { cout << n << " khong la so Amstrong"; }
	cout << endl;
	for (int i = 1;i <= pow(n, dem(n));i++)
	{
		if (amstrong(i) == 1) cout << i << endl;
	}

	
	
	return 0;
}