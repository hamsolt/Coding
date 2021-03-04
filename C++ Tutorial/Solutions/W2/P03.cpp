#include<iostream>
using namespace std;
int main() {
    int a, b, c;
    cout << "Nhap vao canh a: ";
    cin >> a;
    cout << "Nhap vao canh b: ";
    cin >> b;
    cout << "Nhap vao canh c: ";
    cin >> c;
    if (a < b + c && b < a + c && c < a + b) {
        cout << "Tam giac thuong";
        if (a * a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b) {
            cout << "Tam giac vuong";
            if (a == b || b == c || c == a) cout << "Tam giac vuong can";
        }
        else if (a == b && b == c)
            cout << "Tam giac deu";
        else if (a * a > b * b + c * c || b * b > a * a + c * c || c * c > a * a + b * b)
            cout << "Tam giac tu";
        else if (a == b || a == c || b == c)
            cout << "tam giac can";
        else
            cout << "tam giac nhon";
    }
    else
        cout << "Ba canh a, b, c khong phai la ba canh cua mot tam giac";
    return 0;
}