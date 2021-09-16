#include <iostream>

using namespace std;

int main()
{
    int num[3], cnt;
    cout << "Enter 3 number: ";
    cin >> num[0] >> num[1] >> num[2];
    cnt = 0;
    for (int i = 0; i < 3; i++)
        if (num[i] % 2 == 0)
            cnt++;

    cout << "Here is the number of even: " << cnt << "\n";
    system("pause");
    return 0;
}
