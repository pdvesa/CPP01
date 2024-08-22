#ifndef HARL_HPP
#define HARL_HPP

#include <string>
#include <iostream>

class Harl {
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void (Harl::*complainArray[4])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
        void keepComplaining(int i);
    public:
        void complain(std::string level);
};

#endif