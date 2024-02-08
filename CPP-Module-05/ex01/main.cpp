// #include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
    {
        try
        {
            Form formulario("ENEM",1,70);
            Bureaucrat ithalo("Ithalo",1);
            // formulario.beSigned(ithalo);
            std::cout << formulario;
        }
        catch(std::exception & e)
        {
            std::cout << e.what() << std::endl;
        }
        return 0;
    }
}