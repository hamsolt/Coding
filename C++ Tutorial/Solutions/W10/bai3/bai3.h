#ifndef bai3.h
#define bai3_h

#include <iostream>
#include <fstream>
using namespace std;
struct phanso
{
	float tu;
	float mau;
};
void nhapmang(phanso a[100], int n);
void xuatmang(phanso a[100], int n);
void nhapps(phanso& t);
void xuatps(phanso t);
int UCLN(int a, int b);
void rutgon(phanso& t);
void rutgonpsmang(phanso a[100], int n);
phanso timphansoamlonnhat(phanso a[100], int n);
phanso timphansoduongnhonhat(phanso a[100], int n);
bool phanso_textfile(phanso a[100], int n);
void phanso_to_textfile(ofstream& fout, phanso a[100], int n);


#endif // !bai3.h
#pragma once
