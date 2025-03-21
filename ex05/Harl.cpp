#include <iostream>
#include "Harl.hpp"

Harl::Harl()
{
    std::cout << "Default Constructure called";
    std::cout << std::endl;
}

Harl::~Harl()
{
    std::cout << "Default Deconstructure called";
    std::cout << std::endl;
}

void Harl::debug(void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cout << std::endl;
}
void Harl::info(void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
    std::cout << std::endl;
}
void Harl::warning(void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years, whereas you started working here just last month.";
    std::cout << std::endl;
}
void Harl::error(void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now.";
    std::cout << std::endl;
}

void Harl::complain( std::string level )
{
    t_func funcs[] = { &Harl::debug , &Harl::info, &Harl::warning, &Harl::error};
    std::string levels [] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    
    int i = 0;
    while(i < 4 && level.compare(levels[i]))
        i++;
    if(i < 4)
        (this->*funcs[i])();
}
