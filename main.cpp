#include <iostream>
#include "string"


std::string Read_currency()
{
    std::string current;
    std::cin >> current;
    return current;
}

double Read_amount()
{
    double current;
    std::cin >> current;
    return current;
}

double Converter(std::string first_currency,std::string second_currency, double current_amount)
{
    double current;
    if (first_currency == "EURO" && second_currency == "DOLLAR")
    {
        current = current_amount * 1.08;
        return current;
    }
    else if (first_currency == "EURO" && second_currency == "RUBLES")
    {
        current = current_amount * 73.21;
        return current;
    }
    else if (first_currency == "EURO" && second_currency == "TENGE")
    {
        current = current_amount * 499.10;
        return current;
    }
    else if (first_currency == "EURO" && second_currency == "EURO")
    {
        current = current_amount;
        return current;
    }
    // ======================================================================================================
    if (first_currency == "DOLLAR" && second_currency == "EURO")
    {
        current = current_amount * 0.93;
        return current;
    }
    else if (first_currency == "DOLLAR" && second_currency == "RUBLES")
    {
        current = current_amount * 67.79;
        return current;
    }
    else if (first_currency == "DOLLAR" && second_currency == "TENGE")
    {
        current = current_amount * 462.13;
        return current;
    }
    else if (first_currency == "DOLLAR" && second_currency == "DOLLAR")
    {
        current = current_amount;
        return current;
    }
    // ======================================================================================================
    if (first_currency == "RUBLES" && second_currency == "EURO")
    {
        current = current_amount * 0.014;
        return current;
    }
    else if (first_currency == "RUBLES" && second_currency == "DOLLAR")
    {
        current = current_amount * 0.015;
        return current;
    }
    else if (first_currency == "RUBLES" && second_currency == "TENGE")
    {
        current = current_amount * 6.82;
        return current;
    }
    else if (first_currency == "RUBLES" && second_currency == "RUBLES")
    {
        current = current_amount;
        return current;
    }
    // ======================================================================================================
    if (first_currency == "TENGE" && second_currency == "EURO")
    {
        current = current_amount * 0.0020;
        return current;
    }
    else if (first_currency == "TENGE" && second_currency == "DOLLAR")
    {
        current = current_amount * 0.0022;
        return current;
    }
    else if (first_currency == "TENGE" && second_currency == "RUBLES")
    {
        current = current_amount * 0.15;
        return current;
    }
    else if (first_currency == "TENGE" && second_currency == "TENGE")
    {
        current = current_amount;
        return current;
    }
}

std::string Up_Register(std::string amount)
{
    std::string current;
    for (int i = 0; i < amount.size(); ++i) {
        current.push_back(toupper(amount[i]));
    }
    return current;
}

int main()
{
    std::cout << "Hello, this is calculator by Gosama" << std::endl;
    std::cout << "Select the currency you want to convert" << std::endl;
    std::cout << "EURO, DOLLAR, RUBLES, TENGE" << std::endl;

    std::string first_currency = Read_currency();

    std::cout << "Select the currency you want to convert to" << std::endl;
    std::cout << "EURO, DOLLAR, RUBLES, TENGE" << std::endl;

    std::string second_currency = Read_currency();

    std::cout << "Enter the amount" << ' ' << first_currency << ' '<< "you want to convert" << std::endl;

    double current_amount = Read_amount();

    std::cout << first_currency << ' ' << current_amount << " convert to " << second_currency << ' ' << Converter(Up_Register(first_currency),Up_Register(second_currency),current_amount) << std::endl;
    std::cout << "Thanks for using our converter ;)";
}