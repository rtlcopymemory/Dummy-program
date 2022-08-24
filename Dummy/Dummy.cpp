#include <iostream>
#include <string>
#include <windows.h>

#define SIZE 128

int main()
{
    int varInt = 123456;
    std::string varString = "DefaultString";
    char arrChar[SIZE] = "Long char array right here ->";
    int* ptr2int = &varInt;
    int** ptr2ptr = &ptr2int;
    int*** ptr2ptr2 = &ptr2ptr;

    while (true) {
        std::cout << "Process ID: " << GetCurrentProcessId() << std::endl << std::endl;
        std::cout << "varInt\t\t(0x" << std::hex << std::uppercase << &varInt << std::dec;
        std::cout << ") = " << varInt << std::endl;

        std::cout << "varString\t(0x" << std::hex << std::uppercase << &varString << std::dec;
        std::cout << ") = " << varString << std::endl;

        std::cout << "arrChar\t\t(0x" << std::hex << std::uppercase << &arrChar << std::dec;
        std::cout << ") = " << arrChar << std::endl;

        std::cout << std::endl;

        std::cout << "ptr2int\t\t(0x" << std::hex << std::uppercase << &ptr2int << std::dec;
        std::cout << ") = " << std::hex << ptr2int << std::endl << std::dec;

        std::cout << "ptr2ptr\t\t(0x" << std::hex << std::uppercase << &ptr2ptr << std::dec;
        std::cout << ") = " << std::hex << ptr2ptr << std::endl << std::dec;

        std::cout << "ptr2ptr2\t(0x" << std::hex << std::uppercase << &ptr2ptr2 << std::dec;
        std::cout << ") = " << std::hex << ptr2ptr2 << std::endl << std::dec << std::endl;

        std::cout << "Press ENTER to print again." << std::endl;
        getchar();
        std::cout << "-------------------------------------" << std::endl << std::endl;
    }

    return EXIT_SUCCESS;
}
