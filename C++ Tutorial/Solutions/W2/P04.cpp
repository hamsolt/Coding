#include <iostream>
#include <string>
using namespace std;

int main()
{
    char x;
    int i;
    cout << "Nhap mot ki tu: ";
    cin >> x;
    if (x >= 65 && x <= 92)
    {
        x = x + 32;
        cout << "Sau khi doi thanh chu thuong la " << x;
    }
    else {
        x = x - 32;
        cout << "Sau khi doi thanh chu hoa la " << x;
    }
    return 0;
}
