#include "baitap.h"
void xoa(char s[50], int n, int vitri, int soluong)
{
	while (soluong > 0)
	{
		for (int i = vitri;i < n;i++)
			s[i] = s[i + 1];
		s[n - 1] = '\0';
		soluong--;
	}
}
void xoakhoangtrangthua(char s[50], int n)
{
	for (int i = 0;i < n;i++)
	{
		if (s[0] == ' ') {
			//s.erase(0, 1)
			xoa(s, n, 0, 1);
			n--;
		}
		if (s[n - 1] == ' ') {
			//s.erase(n-1, 1);
			xoa(s, n, n - 1, 1);
			n--;
		}
		if (s[i] == ' ' && s[i + 1] == ' ') {
			//s.erase(i, 1);
			xoa(s, n, i, 1);
			n--;
			i--;
		}
	}
}
void thuongsangchuan(char* s, int n)
{
	for (int i = 0;i < n;i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
	}
	for (int i = 0;i < n;i++)
	{
		if (s[0] != ' ' && s[0] <= 'z' && s[0] >= 'a') s[0] = s[0] - 32;
		if (s[n - 1] != ' ' && s[i + 1] <= 'z' && s[i + 1] >= 'a') s[n] = s[n] - 32;
		if (s[i] == ' ' && s[i + 1] <= 'z' && s[i + 1] >= 'a') s[i + 1] -= 32;
	}
}
void bai1(char s[], int n)
{
	cout << "---BAI 1---" << endl;
	for (int i = 0;i < n;i++)
	{
		if (s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
	}
	cout << "chuoi sau khi chuyen sang chu thuong la: " << s << endl;
	for (int i = 0;i < n;i++)
		if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
	cout << "chuoi sau khi chuyen sang chu hoa la: " << s << endl;
	thuongsangchuan(s, n);
	s[n] = '\0';
	cout << "chuoi co ki tu dau la chu hoa la: " << s << endl;
}
void bai2(char* s, int n)
{
	cout << "---BAI 2---" << endl;
	int m = 1;
	for (int i = 0;i < n;i++)
		if (s[i] != s[n - i - 1]) {
			m = 0;
			break;
		}
	if (m == 1) cout << s << " la chuoi doi xung" << endl;
	else cout << s << " khong la chuoi doi xung" << endl;
}
void bai3(char* s, int n)
{
	cout << "---BAI 3---" << endl;
	cout << "chuoi dao nguoc la: ";
	for (int i = n - 1;i >= 0;i--) cout << s[i];
	cout << endl;

}
void bai4(char * s, int n)
{
	cout << "---BAI 4---" << endl;
	int max = 0; char tu;
	for (int i = 0;i < n;i++)
	{
		int d = 0;
		char kt = s[i];
		for (int j = 0;j < n;j++) {
			if (kt == s[j]) d++;
		}
		if (d > max) {
			max = d;
			tu = kt;
		}
	}
	cout<< tu << " xuat hien nhieu nhat " << max << " lan" << endl;
}
void bai5(char * s, int n)
{
	cout << "---BAI 5---" << endl;
	xoakhoangtrangthua(s, n);
	for (int i = 0;i < n;i++)
		if (s[i] <= 'Z' && s[i] >= 'A') s[i] += 32;
	thuongsangchuan(s, n);
	s[n]='\0';
	cout << "Ket qua: " << s << endl;
}
void bai6(char * s, int n)
{
	cout << "---BAI 6---" << endl;
	int m, vitri;
	cout << "Viet ham xoa N ki tu tu vi tri i trong chuoi S" << endl << "nhap N=";
	cin >> m;
	cout << "nhap i=";
	cin >> vitri;
	while (m > 0)
	{
		for (int i = vitri;i < n;i++)
		{
			s[i] = s[i + 1];
		}
		n--;
		m--;
	}
	cout << "chuoi sau khi xoa la: " << s << endl;
}
void bai7()
{
	cout << "---BAI 7---" << endl;
	string s = "", s1 = "";
	//cin.ignore(32767, '\n');
	cout << "nhap n="; getline(cin, s);
	int n = s.length();
	while (n >= 3)
	{
		for (int i = n - 1;i > n - 1 - 3;i--)
		{
			s1 = s1 + s[i];
		}
		s.erase(n - 3, 3);
		n = n - 3;
		s1 += ",";
	}
	int k = s1.length();
	if (s == "") {
		s1.erase(k, 1);
		k--;
	}
	else cout << "so them phay la: " << s;
	for (int i = k - 1;i >= 0;i--)
		cout << s1[i];
	cout << endl;
}
void bai8()
{
	cout << "---BAI 8---" << endl;
	string s1="", s2=""; int m, n;
	cout << "nhap chuoi 1 bat ki: "; //cin.getline(s1, 50 + 1);
	getline(cin, s1);
	cout << "nhap chuoi 2 bat ki: "; //cin.getline(s2, 50 + 1);

	getline(cin, s2);
	int dem = 0;
	m = s1.length();
	n = s2.length();
	if (m < n) cout << "s1 xuat hien trong s2 ";
	else {
		cout << "s2 xuat hien trong s1 ";
		string s;
		s = s1;
		s1 = s2;
		s2 = s;
	}
	m = s1.length(); n = s2.length();
	int i = 0;
	if (m < n) {
		while (i < n) {
			int start = s2.find(s1);
			if (start >= 0 && start < n) {
				s2.erase(start, s1.length());
				dem++;
			}
			n = s2.length();
			i++;
		}
	}
	cout << dem << " lan." << endl;

}
void bai9(char *s, int n)
{
	cout << "---BAI 9---" << endl;
	for (int i = 0;i < n - 1;i++)
		for (int j = i + 1;j < n;j++)
			if (s[i] > s[j]) {
				int tam = s[i];
				s[i] = s[j];
				s[j] = tam;
			}
	cout << "chuoi duoc sap xep tang dan theo ASCII la: " << s << endl;
}


