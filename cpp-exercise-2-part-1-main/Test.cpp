#include "doctest.h"
#include "Board.hpp"
#include <string>
#include <algorithm>

using namespace ariel;
using namespace std;

TEST_CASE("check post & read (valid input)")
{
    Board b;
    b.post(10,10, Direction::Horizontal, "post");
    CHECK(b.read(10, 10, Direction::Horizontal,1) == (string)("p"));
    CHECK(b.read(10, 10, Direction::Vertical,1) == (string)("p"));
    CHECK(b.read(10, 10, Direction::Horizontal,4) == (string)("post"));
    CHECK(b.read(10, 10, Direction::Vertical,4) == (string)("p___"));
    b.post(10,14, Direction::Vertical, "read");
    CHECK(b.read(10, 10, Direction::Horizontal,4) == (string)("post"));
    CHECK(b.read(10, 10, Direction::Vertical,4) == (string)("p___"));
    CHECK(b.read(10, 14, Direction::Horizontal,4) == (string)("r___"));
    CHECK(b.read(10, 14, Direction::Vertical,4) == (string)("read"));
    //RUNNING OVER
    b.post(10,10, Direction::Horizontal, "POST");
    CHECK(b.read(10, 10, Direction::Horizontal,1) == (string)("P"));
    CHECK(b.read(10, 10, Direction::Vertical,2) == (string)("P"));
    CHECK(b.read(10, 10, Direction::Horizontal,4) == (string)("POST"));
    CHECK(b.read(10, 10, Direction::Vertical,4) == (string)("P___"));
    b.post(10,14, Direction::Vertical, "READ");
    CHECK(b.read(10, 10, Direction::Horizontal,4) == (string)("POST"));
    CHECK(b.read(10, 10, Direction::Vertical,4) == (string)("P___"));
    CHECK(b.read(10, 14, Direction::Horizontal,4) == (string)("R___"));
    CHECK(b.read(10, 14, Direction::Vertical,4) == (string)("READ"));
    //post after post
    b.post(10,14, Direction::Horizontal, "post");
    CHECK(b.read(10, 10, Direction::Horizontal,8) == (string)("POSTpost"));
    CHECK(b.read(10, 10, Direction::Vertical,8) == (string)("P_______"));

}


TEST_CASE("check post & read (empty input)"){
    Board b;
    b.post(10,10, Direction::Horizontal, "");
    CHECK(b.read(10, 10, Direction::Horizontal,1) == (string)("_"));
    CHECK(b.read(10, 10, Direction::Vertical,1) == (string)("_"));
}


