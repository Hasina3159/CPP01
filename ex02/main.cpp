#include <iostream>
#include <string>

int main( void )
{
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "String Adress : " << &str << std::endl;
    std::cout << "stringPTR Adress : " << stringPTR << std::endl;
    std::cout << "stringREF Adress : " << &stringREF << std::endl;
    std::cout << "String Value : " << str << std::endl;
    std::cout << "stringPTR Value : " << *stringPTR << std::endl;
    std::cout << "stringREF Value : " << stringREF << std::endl;
}