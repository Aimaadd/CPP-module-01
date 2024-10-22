#include "Harl.hpp"

Harl::Harl () {
    std::cout << "Complaining HARL is here" << std::endl;
}

Harl::~Harl () {
    std::cout << "Complaining HARL is gone" << std::endl;
}

void    Harl::complain(std::string level) {
    std::string modes[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    void (Harl::*ptr[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    int i = 0;
    while (i < 4 && modes[i].compare(level) != 0) {
        i++;
    }
    if (i > 3)
        std::cout << "HARL is complaining about something" << std::endl;
    if (i < 4)
        (this->*ptr[i])();
}

void    Harl::debug(void) {
    std::cout << "[DEBUG MESSAGE]" << std::endl;
    std::cout << "love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void    Harl::info(void) {
    std::cout << "[INFO MESSAGE]" << std::endl;
    std::cout <<  "cannot believe adding extra bacon costs more money. You didn’t putenough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void    Harl::warning(void) {
    std::cout << "[WARNING MESSAGE]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void    Harl::error(void) {
    std::cout << "[ERROR MESSAGE]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now" << std::endl;
}