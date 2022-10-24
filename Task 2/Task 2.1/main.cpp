#include <iostream>

/**
* \brief Приготавливает чашечку кофе.
* \return "Напиток".
*/
std::string GetCoffee();

/**
* \brief Приготавливает чашечку молока.
* \return "Напиток".
*/
std::string GetMilk();

/**
* \brief Приготавливает чашечку чая.
* \return "Напиток".
*/
std::string GetTea();

/**
* \brief Тип данных Напиток
*/
enum class Drink
{
    /**
    * \brief кофе
    */
    Coffee,
    /**
    * \brief чай
    */
    Tea,
    /**
    * \brief молоко
    */
    Milk
};

/**
* \brief Точка входа в программу.
* \return Код ошибки. 0 в случае успеха.
*/
int main()
{
    std::cout << "Выберите напиток \n" <<
        "\tкофе - " << static_cast<int>(Drink::Coffee) << "\n" <<
        "\tчай - " << static_cast<int>(Drink::Tea) << "\n" <<
        "\tмолоко - " << static_cast<int>(Drink::Milk) << "\n";

    int userChoice = -1;
    std::cin >> userChoice;

    auto drink = static_cast<Drink>(userChoice);

    switch (drink)
    {
    case (Drink::Coffee):
        {
            std::cout << GetCoffee();
            break;
        }
    case (Drink::Tea):
        {
            std::cout << GetTea();
            break;
        }
    case (Drink::Milk):
        {
            std::cout << GetMilk();
            break;
        }
    default:
        {
            std::cout << "Ошибка!" << std::endl;
        }
    }

    return 0;
}

std::string GetCoffee()
{
    return "Ваш кофе";
}

std::string GetMilk()
{
    return "Ваше молоко";
}

std::string GetTea()
{
    return "Ваш чай";
}