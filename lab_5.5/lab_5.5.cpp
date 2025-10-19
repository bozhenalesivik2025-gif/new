#include <iostream>
#include "windows.h" 

using namespace std;

double d1 = 0;
double d2 = 0;

double findNthTerm(double a1, double d, int n) {
    if (n == 1) {
        return a1;
    }
    else {
        d1++;
        return findNthTerm(a1, d, n - 1) + d;
    }
}
double findSum(double a1, double d, int n) {
    if (n == 1) {
        return a1;
    }
    else {
        d2++;
        double an = a1 + (n - 1) * d;

        // S(n) = S(n-1) + a_n
        return findSum(a1, d, n - 1) + an;
    }
}
int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    double a1, d;
    int n;
    cout << " Арифметична прогресія" << endl;
    cout << "Введіть перший член (a1): ";
    cin >> a1;
    cout << "Введіть різницю (d): ";
    cin >> d;
    cout << "Введіть номер/кількість членів (n): ";
    cin >> n;

    double nthTerm = findNthTerm(a1, d, n);
    double sumOfTerms = findSum(a1, d, n);

    cout << "\n--- Результати обчислень ---" << endl;

    cout << "n-й член (a_" << n << "): " << nthTerm << endl;
    cout << "Глибина рекурсії: " << d1 << endl;

    cout << "Сума " << n << " членів (S_" << n << "): " << sumOfTerms << endl;
    cout << "Глибина рекурсії: " << d2 << endl;

    return 0;
}