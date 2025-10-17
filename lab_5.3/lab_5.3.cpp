#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;
double s(const double x);

int main()
{
    double tp, tk, Y;
    int n;

    cout << "tp = "; cin >> tp; 
    cout << "tk = "; cin >> tk; 
    cout << "n = "; cin >> n;   
 
    double ts = (tk - tp) / n;
    double t = tp;

    cout << "---------------------------------" << endl;
    cout << "|" << setw(10) << "t" << setw(5) << "|" << setw(15) << "Y" << setw(5) << "|" << endl;
    cout << "---------------------------------" << endl;

    while (t <= tk)
    {
        Y = s(t * t + 1) + 2 * pow(s(1 - t), 2) + s(1);

        cout << "|" << fixed << setprecision(4) << setw(10) << t << setw(5) << "|"
            << fixed << setprecision(6) << setw(15) << Y << setw(5) << "|" << endl;
        t += ts;
    }

    cout << "---------------------------------" << endl;
    return 0;
}
double s(const double x)
{
    if (abs(x) > 1)
    {
        return (cos(x) * cos(x) + 1) / exp(x);
    }
    else
    {
        double S = 0;
        int k = 0;

        double a = x;
        S = a;

        do
        {
            k++;
           
            double R = (x * x) / ((2.0 * k) * (2.0 * k + 1.0));
            a *= R;
            S += a;
        } while (k < 4); 

        return S;
    }
}