#include <iostream>
#include <cctype>

char *to_upper(char *str)
{
    for(int i = 0; str[i]; i++)
        str[i] = toupper(str[i]);
    return str;
}

int main(int argc, char *argv[])
{
    if(argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else if (argc == 2)
        std::cout << to_upper(argv[1]) << std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
            std::cout << to_upper(argv[i]);
        std::cout << std::endl;
    }
}
