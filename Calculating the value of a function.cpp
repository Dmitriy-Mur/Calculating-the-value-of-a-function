#include <iostream>
using namespace std;

int direct_factorial(int x);
double direct_calculation(int x);
int recursive_factorial(int x);
double recursive_calculation(int x, int n);

int main()
{
    setlocale(LC_ALL, "Rus");
    int x = 15;
    int n = 7;
    for (int i = 0; i <= x; i++)
    {
        cout << "При x = " << i << ":" << '\n';
        cout << " Прямое : S = " << direct_calculation(i) << '\n';
        cout << "Рекурсия: S = " << recursive_calculation(i, n) << '\n';
    }
}

int direct_factorial(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result = result * i;
    }
    return result * (x != 0);
}

double direct_calculation(int x)
{
    double s = 0;
    int accuracy = 8;
    for (int i = 0; i < accuracy; i++)
    {
        s = s + pow(x, 2 * i + 1) / direct_factorial(2 * i + 1);
    }
    return s;
}

int recursive_factorial(int x)
{
    if (x <= 1)
        return 1 * x;
    else
        return x * recursive_factorial(x - 1);
}

double recursive_calculation(int x, int n)
{
    if (n == 0)
        return x;
    return pow(x, 2 * n + 1) / recursive_factorial(2 * n + 1) + recursive_calculation(x, n - 1);
}
