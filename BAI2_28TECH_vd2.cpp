// BAI2_28TECH_vd2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
    int a, b, c,S;
    cout << "Nhap ba so a,b,c: "; cin >> a >> b >> c;
    S = 1ll*a*(b + c) + 1ll*b*(a + c);
    cout << S;

}

