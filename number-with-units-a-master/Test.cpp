#include "NumberWithUnits.hpp"
#include <iostream>
#include "doctest.h"

using namespace ariel;

TEST_CASE("checking values")
{
    CHECK(NumberWithUnits(1, "km") == NumberWithUnits(1000,"cm"));
    CHECK(NumberWithUnits(2, "km") == NumberWithUnits(2000,"cm"));
    CHECK(NumberWithUnits(3, "km") == NumberWithUnits(3000,"cm"));
    CHECK(NumberWithUnits(4, "km") == NumberWithUnits(4000,"cm"));
    CHECK(NumberWithUnits(5, "km") == NumberWithUnits(5000,"cm"));
    CHECK(NumberWithUnits(6, "km") == NumberWithUnits(6000,"cm"));
    CHECK(NumberWithUnits(7, "km") == NumberWithUnits(7000,"cm"));
    CHECK(NumberWithUnits(8, "km") == NumberWithUnits(8000,"cm"));
    CHECK(NumberWithUnits(9, "km") == NumberWithUnits(9000,"cm"));
    CHECK(NumberWithUnits(1, "hours") == NumberWithUnits(60,"minutes"));
    CHECK(NumberWithUnits(2, "hours") == NumberWithUnits(120,"minutes"));
    CHECK(NumberWithUnits(3, "hours") == NumberWithUnits(180,"minutes"));
    CHECK(NumberWithUnits(4, "hours") == NumberWithUnits(240,"minutes"));
    CHECK(NumberWithUnits(5, "hours") == NumberWithUnits(300,"minutes"));
}

TEST_CASE("Upper and lower letters & illegal types")
{
    CHECK_THROWS(NumberWithUnits(1, "Cm"));
    CHECK_THROWS(NumberWithUnits(1, "Second"));
    CHECK_THROWS(NumberWithUnits(1, "Kilogram"));
    CHECK_THROWS(NumberWithUnits(1, "Minutes"));
    CHECK_THROWS(NumberWithUnits(1, "Day"));
    CHECK_THROWS(NumberWithUnits(1, "Week"));
}