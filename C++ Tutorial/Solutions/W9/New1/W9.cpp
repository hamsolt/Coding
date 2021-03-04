#include "W9.h"
void nhapmatran(int a[50][50], int m, int n)
{
	srand((unsigned int)time(NULL));
	cout << endl << "Random:" << endl;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			a[i][j] = -500 + rand() % (500 - -500 + 1);
}
void xuatmatran(int a[50][50], int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
			cout << "\t" << a[i][j];
		cout << endl;
	}
}
int tongcacphantuduong(int a[50][50], int m, int n)
{
	int s = 0;
	for (int i = 0; i < m; i++)
		for (int j = 0; j < n; j++)
			if (a[i][j] > 0) s += a[i][j];
	return s;
}
int songuyento(int n)
{
	int d = 0;
	for (int i = 1; i < n; i++)
		if (n % i == 0) d++;
	if (d == 1) return 1;
	else return 0;
}
int demsonguyento(int a[50][50], int m, int n)
{
	int dem = 0;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			if (songuyento(a[i][j]) == 1) dem++;
	return dem;
}
int dongchuagiatriam(int a[50][50], int m, int n)
{
	int kq=-1;
	for (int j=0;j<n;j++)
		if (a[m][j] < 0) {
			kq = m;
		}
	return kq;
}
int timmaxduongcheochinh(int a[50][50], int m, int n)
{
	int max = a[0][0];
	for (int k = 0; k < m; k++)
		if (a[k][k] > max) max = a[k][k];
	return max;
}
int timmaxduongcheophu(int a[50][50], int m, int n)
{
	int max = a[0][n-1];
	for (int k = 0; k < m; k++)
		if (a[k][n-1-k] > max) max = a[k][n-1-k];
	return max;
}
void sapxepduongcheochinhtangdan(int a[50][50], int m, int n)
{
	int b[100], k=0;
	for (int i = 0; i < n; i++)
	{
		b[k] = a[i][i];
		k++;
	}
	for (int i=0;i<k-1;i++)
		for (int j=i+1;j<k;j++)
			if (b[i] > b[j]) {
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	for (int i = 0; i < k; i++)
	{
		a[i][i] = b[i];
	}
	xuatmatran(a, m, n);
	cout << endl;
}
void sapxepduongcheochinhgiamdan(int a[50][50], int m, int n)
{
	int b[100], k = 0;
	for (int i = 0; i < n; i++)
	{
		b[k] = a[i][i];
		k++;
	}
	for (int i = 0; i < k - 1; i++)
		for (int j = i + 1; j < k; j++)
			if (b[i] < b[j]) {
				int temp = b[i];
				b[i] = b[j];
				b[j] = temp;
			}
	for (int i = 0; i < k; i++)
	{
		a[i][i] = b[i];
	}
	xuatmatran(a, m, n);
	cout << endl;
}