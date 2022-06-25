// Author: vcordeir <vcordeir@student.42sp.org.br>
// 42 SP

#include <iostream>

int main( void )
{
    std::string lString = "HI THIS IS BRAIN";
    std::string* lpStringPTR = &lString;
    std::string& lrStringREF = lString;

    std::cout << std::endl;

    std::cout << "The memory address of the string variable: " << &lString << std::endl;
    std::cout << "The memory address held by stringPTR:      " << lpStringPTR << std::endl;
    std::cout << "The memory address held by stringREF:      " << &lrStringREF << std::endl;

    std::cout << std::endl;

    std::cout << "The value of the string variable:  " << lString << std::endl;
    std::cout << "The value pointed to by stringPTR: " << *lpStringPTR << std::endl;
    std::cout << "The value pointed to by stringREF: " << lrStringREF << std::endl;

    std::cout << std::endl;

    return 0;
}
