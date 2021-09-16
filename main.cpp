#include <iostream>

using namespace std;

int main()
{
    int a, b, c, cnt;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    cnt = 0;
    if (a % 2 == 0)
        cnt = cnt + 1;
    //   cout << cnt;
    // Tăng lên 1 đơn vị nếu a là số chẵn
    if (b % 2 == 0)
        cnt = cnt + 1;
    //   cout << cnt;
    if (c % 2 == 0)
        cnt = cnt + 1;
    //   cout << cnt;
    cout << "So luong so chan la: " << cnt;
    cout << "";
    system("pause");
    return 0;
}
