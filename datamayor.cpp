#include <iostream>
#include <cmath>
#include <string>
#include <string.h>
#include <cstdlib>

using namespace std;

double Plus(double a, double b)
{
    return a + b;
}
double Minus(double a, double b)
{
    return a - b;
}
double Delit(double a, double b)
{
    return a / b;
}
double Umn(double a, double b)
{
    return a * b;
}
double Stepen(double a, double b)
{
    return pow(a, b);
}
double Coren(double a)
{
    return sqrt(a);
}
void MakeDes(double (*funs)())
{
    cout << funs();
}
int main()
{
    double a;
    double b;

    cout << "Введите числа\n";
    cin >> a;
    cin >> b;
    cout << "Выберите метод\n";

    MakeDes(Delit());

}
