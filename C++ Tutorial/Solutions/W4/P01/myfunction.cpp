#include "myfunction.h"
int loaiboso(int n)
{
	int t=0, tam = n % 10;
	while (n > 0) {
		if (tam != 0 && tam != 5) {
			t = t * 10 + tam;
		}
		n /= 10;
		tam = n % 10;
	}
	n = 0;
	while (t > 0) {
		int i = t % 10;
		n = n * 10 + i;
		t /= 10;
	}
	return n;
}
bool ktsnt(int n)
{
	int dem = 0;
	for (int i = 1;i <= n;i++)
	{
		if (n % i == 0) dem++;
	}
	if (dem == 2) return true;
	else return false;
}
void phantichthuasonguyento(int n)
{
	cout << n << "=";
	int i = 2;
	while (i <= n) {
		if (n % i == 0) {
			cout << i;
			n /= i;
			break;
		}
		else i++;
	}
	while (n != 0&&i<=n) {
		
		while (n % i == 0) {
			n /= i;
			cout <<"*"<< i;
		}
		i++;
	}
}