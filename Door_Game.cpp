#include <iostream>

int main()
{
    int doorChoice;

    std::cout << "You see two doors. \n";
    std::cout << "1. Red Door \n";
    std::cout << "2. Blue Door \n";
    std::cout << "3. Green Door \n";


    std::cout << "Choose a door: ";
    std::cin >> doorChoice;

    if (doorChoice == 1)
    {
        std::cout << "A dragon appears!\n";
    }
    else if (doorChoice == 2)
    {
        std::cout << "you find treasure!\n";
    }
    else
    {
        std::cout << " A wizard grants you a magic sword!\n";
    }
    return 0;
}