#include <bits/stdc++.h>
#include <windows.h>

using namespace std;

#define MAXN    45
#define UNKNOWN -1
long f[MAXN + 1];

double diff(LARGE_INTEGER * a, LARGE_INTEGER * b)
{
    LARGE_INTEGER freq;

    QueryPerformanceCounter(&freq);
    return (double) (a->QuadPart - b->QuadPart) / (double) freq.QuadPart;
}

long fib_r(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return(fib_r(n - 1) + fib_r(n - 2));
}

long fib_c(int n)
{
    if (f[n] == UNKNOWN)
        f[n] = fib_c(n - 1) + fib_c(n - 2);
    return(f[n]);
}

long fib_c_driver(int n)
{
    int i;

    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; ++i) {
        f[i] = UNKNOWN;
    }
    return(fib_c(n));
}

long fib_dp(int n)
{
    int i;
    long f[MAXN + 1];

    f[0] = 0;
    f[1] = 1;
    for (i = 2; i <= n; ++i) {
        f[i] = f[i - 1] + f[i - 2];
    }

    return(f[n]);
}

long fib_ultimate(int n)
{
    int i;
    long back2 = 0, back1 = 1;
    long next;

    if (n == 0)
        return(0);
    for (i = 2; i < n; ++i) {
        next = back1 + back2;
        back2 = back1;
        back1 = next;
    }
    return(back1 + back2);
}

int main()
{
    LARGE_INTEGER t_ini, t_fin;
    double secs;

    QueryPerformanceCounter(&t_ini);
    fib_ultimate(50000);
    QueryPerformanceCounter(&t_fin);
    secs = diff(&t_fin, &t_ini);
    printf("\n");
    printf("%.16g \n", secs * 1000.0);
}
