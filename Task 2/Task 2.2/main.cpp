#include <iostream>

/**
* \brief Расчет первой части ломаной функции.
* \param x Аргумент.
* \return Значение функции в точке.
*/
double GetF1(const double x);

/**
* \brief Расчет первой части ломаной функции.
* \param x Аргумент.
* \return Значение функции в точке.
*/
double GetF2(const double x);

/**
* \brief Расчет первой части ломаной функции.
* \param x Аргумент.
* \return Значение функции в точке.
*/
double GetF3(const double x);

/**
*/
int main()
{
    std::cout << "Введите значение аргумента = ";
    double x = 0.0;
    std::cin >> x;

    const auto x1 = 2.5;
    const auto x2 = 3.7;

    if (x <= x1)
    {
        std::cout << GetF1(x) << std::endl;
    }
    else if (x <= x2)
    {
        std::cout << GetF2(x) << std::endl;
    }
    else
    {
        std::cout << GetF3(x) << std::endl;
    }

    return 0;
}

double GetF1(const double x)
{
    return -7.5 + 8 * x;
}

double GetF2(const double x)
{
    return 1.0;
}

double GetF3(const double x)
{
    return 7.5 + 2.5 * x;
}
