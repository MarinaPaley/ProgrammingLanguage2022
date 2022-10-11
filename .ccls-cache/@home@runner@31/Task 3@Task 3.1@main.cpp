#include <iostream>
#include <cmath>
#include <limits>

bool IsExists(const double x);
double Calculation(const double x);
int main()
{
    const double xStart = -10;
    const double xFinish = 10;
    const double step = 0.1;
    double x = xStart;
    
    while(x < xFinish + step/2)
        {
            if (IsExists(x))
            {
                const double y = Calculation(x);
                std::cout << x << " " << y << "\n";
            }
            else
            {
                std::cout << x << " " << "Нет значения \n";
            }
            x += step;
        }
    
    return 0;
}

bool IsExists(const double x)
{
    return (std::abs(std::cos(x)) > std::numeric_limits<double>::min() && 
        std::abs(3 + std::sin(x) * 3.6) > std::numeric_limits<double>::min());
}

double Calculation(const double x)
{
    return std::tan(x) + x - (1 / (3 + 3.6 * std::sin(x)));
}
