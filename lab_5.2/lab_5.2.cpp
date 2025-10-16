#include <iostream>
#include <iomanip>
#include <cmath>


using namespace std;

double S(const double x, const double eps, int& n, double s);
double A(const double x, const int n, double a);

int main()
{
  
    double xp, xk, x, dx, eps, s = 0;
    int n = 0;

    cout << "xp = "; cin >> xp;
    cout << "xk = "; cin >> xk;
    cout << "dx = "; cin >> dx;
    cout << "eps = "; cin >> eps;

    cout << fixed;
    cout << "-------------------------------------------------" << endl;
    cout << "|" << setw(7) << "x" << " |"
        << setw(12) << "ln(x)" << " |"
        << setw(12) << "S" << " |"
        << setw(5) << "n" << " |"
        << endl;
    cout << "-------------------------------------------------" << endl;

    x = xp;
    while (x <= xk)
    {
        if (x <= 0) {
            cout << "|" << setw(7) << setprecision(2) << x << " |"
                << "   |"
                << "  |"
                << "     |"
                << endl;
            x += dx;
            continue;
        }

        s = S(x, eps, n, s);

        cout << "|" << setw(7) << setprecision(2) << x << " |"
            << setw(12) << setprecision(5) << log(x) << " |"
            << setw(12) << setprecision(5) << s << " |"
            << setw(5) << n << " |"
            << endl;
        x += dx;
    }
    cout << "-------------------------------------------------" << endl;
    return 0;
}
double S(const double x, const double eps, int& n, double s)
{
    n = 0; 

    double a = (x - 1.0) / (x + 1.0); // вираз залежить від умови завдання варіанту

    s = a; 
    do {
        n++;
        a = A(x, n, a);
        s += a;
    } while (abs(a) >= eps);
    return 2 * s;
}

double A(const double x, const int n, double a)
{

    // R = ((x-1)/(x+1))^2 * (2n-1)/(2n+1)
    double z = (x - 1.0) / (x + 1.0);
    double R = z * z * (2.0 * n - 1.0) / (2.0 * n + 1.0); // вираз залежить від умови завдання варіанту
    a *= R;
    return a;
}