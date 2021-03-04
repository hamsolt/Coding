#include <iostream>
using namespace std;

int main()
{
    int n, tien; char x;
    cout << "nhap so ngay thue phong " << endl;
    cin >> n;
    cout << "nhap loai phong" << endl;
    cin >> x;
    if (x == 'A') {
        tien = 400000 * n;
        if (x > 12) {
            tien = tien * 0.9;
        }
    }
    if (x == 'B') {
        tien = 300000 * n;
        if (n > 12) {
            tien = tien * 0.92;
        }


    }
    if (x == 'C') {
        tien = 250000 * n;
        if (n > 12) {
            tien = tien * 0.92;
        }
    }
    cout << tien;
    return 0;
}