// I. Repression

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << a + b + c - min({a, b, c}) << '\n';
}
