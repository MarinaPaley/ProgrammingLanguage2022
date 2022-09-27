#define _USE_MATH_DEFINES // for C++
#include <cmath>
#include <iostream>

/**
* \brief Расчет а по заданной формуле.
* \param x Первый аргумент функции.
* \param y Второй аргумент функции.
* \return Значение a.
*/
double GetA(const double x, const double y);

/**
* \brief Расчет а по заданной формуле.
* \param z Первый аргумент функции.
* \return Значение a.
*/
double GetB(const double z);

/**
 * \brief Точка входа в программу
 * \return 0 в случае успеха
 */
int main()
{
    const auto x = 1.426;
    const auto y = -1.22;
    const auto z = 3.5;
    const auto a = GetA(x, y);
    const auto b = GetB(z);
    std::cout << "a = " << a <<", b = " << b <<" \nx = " << x 
        << ", y = " << y << ", z = " << z;
    std::cout << std::endl;
    return 0; // Это однострочный комментарий. Код ошибки
}

double GetA(const double x, const double y)
{
    return 2 * cos(x - M_PI / 6) / (1.0 / 2 + sin(y) * sin(y));
}

double GetB(const double z)
{
    return (1 + z * z / (3 + z * z / 5));
}