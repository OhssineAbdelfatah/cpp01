#ifndef WEAPON_HPP
#define WEAPON_HPP
#include<iostream>

class Weapon {
    private :
        std::string _type;

    public :
        ~Weapon();
        Weapon(std::string type);
        void setType(std::string type);
        const std::string const &getType() const;
};

#endif