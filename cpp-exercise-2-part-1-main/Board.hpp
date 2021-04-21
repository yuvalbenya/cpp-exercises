#include <string>
#include "Direction.hpp"
using namespace std;
const int MAXSIZE = 2147;

namespace ariel
{
    class Board
    {
        char table [MAXSIZE][MAXSIZE];
        unsigned int row;
        unsigned int col;

    public:
        void post(unsigned int row, unsigned int col, Direction direction, string input);
        string read(unsigned int row, unsigned int col, Direction direction, unsigned int len);
        void show();
    };
}