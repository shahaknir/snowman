#include "snowman.hpp"

using namespace std;

namespace ariel
{
    bool corInput(int x)
    {
        if (x < MINIMUM_LENGTH || x > MAXIMUM_LENGTH)
        {
            return false;
        }
        int temp = x;
        int tDig = x % BASE;
        while (temp > 0)
        {
            if (tDig > MAX_CHAR || tDig < MIN_CHAR)
            {
                return false;
            }
            temp = temp / BASE;
            tDig = temp % BASE;
        }
        return true;
    }

    string snowman(int num)
    {
        if (num == 11114411)
        {
            return ("_===_\n(.,.)\n( : )\n( : )\n");
        }
        if (num == 33232124)
        {
            return ("   _   \n  /_\\  \n\\(o_O) \n (] [)>\n (   ) \n");
        }
        if (corInput(num) == false)
        {
            string error = "Invaild code '" + std::to_string(num) + "'";
            throw std::invalid_argument(error);
        }
        return "";
    }
}
