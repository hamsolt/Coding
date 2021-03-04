#include "myfunction.h"
int main()
{
	int n;
	do {
		cout << "nhap mot so nguyen duong " << endl;
		cin >> n;
	} while (n <= 0);
	cout << "kqua sau khi loai bo so 0 va 5 la "<<loaiboso(n)<<endl;
	//phantichthuasonguyento
	phantichthuasonguyento(n);
	return 0;
}