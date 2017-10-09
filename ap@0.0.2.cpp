#include <iostream>
#include <sstream>

int main()
{
    std::string string;
    float x, res;
    char y;
    getline(std::cin, string);
    std::istringstream stream(string);
    stream >> res;

    while (stream >> y)
    {
        if (y == '+')
        {
            stream >> x;
            res = res + x;
        }
        else if (y == '-')
        {
            stream >> x;
            res = res - x;
        }
        else if (y == '*')
        {
            stream >> x;
            res = res * x;
        }
        else if (y == '/')
        {
            stream >> x;
            res = res / x;
        }

    }
    std::cout << res;
    return 0;
}
