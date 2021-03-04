#include <iostream>
#include<math.h>
#include <fstream>
using namespace std;
struct ptb2
{
	float a, b, c;
};

int main()
{
    
	int n;
    float x1, x2, delta;
	ptb2 t[100];
    ifstream in;
    in.open("ptb2.txt");
    if (!in.is_open())
    {
        cout << "loi tao tep tin....";
    }
    else {
        cout << "du lieu tu tep ptb2.txt:" << endl;
        in >> n;
        for (int i = 0; i < n; i++)
        {
            in >> t[i].a >> t[i].b >> t[i].c;
        }
    }
    in.close();
    ofstream out;
    out.open("giaiptb2.txt");
    if (!out)
    {
        cout << "loi tao tep tin...";
    }
    else {
        cout << "Da luu du lieu vao giaiptb2.txt" << endl;
        for (int i = 0; i < n; i++)
        {
            out << t[i].a << "x^2 + " << t[i].b << "x + " << t[i].c << " = 0; ";
            if (t[i].a == 0) {
                // a== 0 phuong trinh tro thanh phuong trinh bac mot bx + c = 0
                if (t[i].b == 0) {
                    if (t[i].c == 0) {
                        out << "VO SO NGHIEM" << endl;
                    }
                    else {
                        out << "VO NGHIEM" << endl;
                    }
                }
                else {
                    out << "x = " << -t[i].c / t[i].b << endl;
                }
            }
            else {
                delta = t[i].b * t[i].b - 4 * t[i].a * t[i].c;
                if (delta > 0) {
                    x1 = (-t[i].b + sqrt(delta)) / (2 * t[i].a);
                    x2 = (-t[i].b - sqrt(delta)) / (2 * t[i].a);
                    out << "x1 = " << x2;
                    out << ", x2 = " << x1;
                }
                else if (delta == 0) {
                    out << "x1 = x2 = " << -t[i].b / 2 * t[i].a << endl;
                }
                else {
                    out << "VO NGHIEM" << endl;
                }
            }

        }
    }
    out.close();


	return 0;
}