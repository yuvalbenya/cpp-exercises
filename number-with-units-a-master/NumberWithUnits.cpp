
#include "NumberWithUnits.hpp"
#include <iostream>

namespace ariel
{

        void NumberWithUnits::read_units(std::ifstream &units_file) {}

        NumberWithUnits NumberWithUnits::operator+(const NumberWithUnits &num)
        {
                NumberWithUnits cm(1, "cm");
                return cm;
        }
        NumberWithUnits &NumberWithUnits::operator+=(const NumberWithUnits &num)
        {
                return *this;
        }

        NumberWithUnits NumberWithUnits::operator+()
        {
                NumberWithUnits cm(1, "cm");
                return cm;
        }
        NumberWithUnits NumberWithUnits::operator-(const NumberWithUnits &num)
        {
                NumberWithUnits cm(1, "cm");
                return cm;
        }
        NumberWithUnits &NumberWithUnits::operator-=(const NumberWithUnits &num)
        {
                return *this; 
                }
        NumberWithUnits NumberWithUnits::operator-()
        {
                NumberWithUnits cm(1, "cm");
                return cm;       
        }

        bool NumberWithUnits::operator>(const NumberWithUnits &num) const
        {
                return false;
                }
        bool NumberWithUnits::operator>=(const NumberWithUnits &num) const { return false; }
        bool NumberWithUnits::operator<(const NumberWithUnits &num) const { return false; }
        bool NumberWithUnits::operator<=(const NumberWithUnits &num) const { return false; }
        bool NumberWithUnits::operator==(const NumberWithUnits &num) const { return false; }
        bool NumberWithUnits::operator!=(const NumberWithUnits &num) const { return false; }

        NumberWithUnits &NumberWithUnits::operator++()
        {
                return *this;
                }

        NumberWithUnits NumberWithUnits::operator++(int dummy_flag_for_postfix_increment)
        {
                NumberWithUnits cm(1, "cm");
                return cm;       
        }

        std::ostream &operator<<(std::ostream &out, const NumberWithUnits &num)
        {
                return (out << "cm");
        }
        std::istream &operator>>(std::istream &in, NumberWithUnits &num)
        {
                int cm = 0;
                return (in >> cm);
        }

        NumberWithUnits operator*(double num, NumberWithUnits &n)
        {
                NumberWithUnits cm(1, "cm");
                return cm;       
        }

}