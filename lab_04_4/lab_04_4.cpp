// lab_04_4.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{   

    double x, xp, xk, dx, R, y;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "R = "; cin >> R;
    cout << fixed;
    cout << "----------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(10) << "y" << " |" << endl;
    cout << "----------------------" << endl;
    x = xp;


    while (x <= xk) {
        if (x <= -R)
            y = R;
        else
            if (-R < x && x <= R)
                y = R - sqrt(R * R - x * x);
            else
                if (R < x && x <= 6)
                    y = ((9 * R) - (3 * x) - (R * x)) / (6 - R);
                else
                    y = x - 9;
        cout << "|" << setw(7) << setprecision(2) << x
            << " |" << setw(10) << setprecision(3) << y
            << " |" << endl;
        x += dx;
    }
    cout << "----------------------" << endl;
    cin.get();
    return 0;
}