#include "Bureaucrat.hpp"

int main(void)
{
    try
    {
        Bureaucrat ithalo("ithalo",1);
        std::cout << ithalo << std::endl;
        Bureaucrat josivaldo("josivaldo",149);
        std::cout << josivaldo << std::endl;
        Bureaucrat jeremias("jeremias",150);
        std::cout << jeremias << std::endl;
        Bureaucrat albertino("albertino",151);
        std::cout << albertino << std::endl;
    }
    catch(std::exception & e)
    {
        std::cout << e.what() << std::endl;
    }
    return 0;
}