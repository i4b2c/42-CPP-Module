#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void)
{
    {
        try
        {
            ShrubberyCreationForm Teste;
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
}