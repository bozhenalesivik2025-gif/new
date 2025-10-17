#include <iostream>
#include <cmath>

using namespace std;
double S0(const int K, const int N)
{
    double s = 0;
    for (int j = K; j <= N; j++)
    {
        s = s + (1. * j * (N - j)) / ((1. * j * 1. * j) + (1. * (N - j) * 1. * (N - j)));  
    }
    return s;
}

double S1(const int K, const int N, const int j)
{
    if (j > N)
        return 0;
    else
        return ((1. * j * (N - j)) / ((1. * j * 1. * j) + (1. * (N - j) * 1. * (N - j)))) + S1(K, N, j + 1);
}

double S2(const int K, const int N, const int j)
{
    if (j < K)
        return 0;
    else
    
        return ((1. * j * (N - j)) / ((1. * j * 1. * j) + (1. * (N - j) * 1. * (N - j)))) + S2(K, N, j - 1);
    }

double S3(const int K, const int N, const int j, double t)
{
        t = t + (1. * j * (N - j)) / ((1. * j * 1. * j) + (1. * (N - j) * 1. * (N - j)));
    if (j >= N)
        return t;
    else
        return S3(K, N, j + 1, t);
}

double S4(const int K, const int N, const int j, double t)
{  
        t = t + (1. * j * (N - j)) / ((1. * j * 1. * j) + (1. * (N - j) * 1. * (N - j)));
    if (j <= K)
        return t;
    else
        return S4(K, N, j - 1, t);
}

int main()
{
    int N;
    const int K = 2; 

    cout << "N = "; cin >> N;
    cout << "(iter)        S0 = " << S0(K, N) << endl;
    cout << "(rec up ++)   S1 = " << S1(K, N, K) << endl;
    cout << "(rec up --)   S2 = " << S2(K, N, N) << endl;
    cout << "(rec down ++) S3 = " << S3(K, N, K, 0) << endl;
    cout << "(rec down --) S4 = " << S4(K, N, N, 0) << endl;

    return 0;
}