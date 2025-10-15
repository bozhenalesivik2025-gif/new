#include <iostream>
#include <cmath>

using namespace std;
double f(const double x, const double y);

int main()
{
    double s, t;

    cout << " s: ";
    cin >> s;
    cout << " t: ";
    cin >> t;

    double z = (f(t, s) + f(s, 1)) / (1 + pow(f(t, t * s), 2));
    cout << "result z = " << z << endl;

    return 0;
}
double f(const double x, const double y)
{
    return (x * x - cos(y) + y * y) / (1 + x * y);
}