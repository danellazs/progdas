#include <iostream>
using namespace std;

int find(int num)
{
    int first, second;
    first = num * num;
    second = first + num;
    if (second > 100)
        num = first / 10;
    else
        num = first / 20;
    return num + 2;
}

int discover(int one, int two)
{
    int secret = 0;
    for (int i = one; i < two; i++)
        secret = secret + i * i;
    return secret;
}

int main()
{
    int x, y;
    cout << "a. " << find(15) << endl;
    cout << "b. " << discover(3, 9) << endl;
    cout << "c. " << find(10) << " " << discover(10, find(10)) << endl;
    x = 12;
    y = 8;
    cout << "d. " << discover(y, x) << endl;

    return 0;
}
