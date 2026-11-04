#include <iostream>

int main()
{
    int doorChoice;
    int wizardChoice;
    int swordDamage = 0;
    int dragonChoice;


    std::cout << "You see two doors. \n";
    std::cout << "1. Red Door \n";
    std::cout << "2. Blue Door \n";
    std::cout << "3. Green Door \n";


    std::cout << "Choose a door: ";
    std::cin >> doorChoice;

    if (doorChoice == 1)
    {
        std::cout << "A dragon appears!\n";

        std::cout << "1. Fight the dragon\n";
        std::cout << "2. Run away\n";
        std::cout << "Choose: ";
        std::cin >> dragonChoice;
    }
    else if (doorChoice == 2)
    {
        std::cout << "you find treasure!\n";
    }
    else if (doorChoice == 3)
    {
        std::cout << " A wizard grants you a magic sword!\n";

        std::cout << "1. Accept the sword\n";
        std::cout << "2. Refuse the sword\n";

        std::cout << "Choose: ";
        std::cin >> wizardChoice;

        if (wizardChoice == 1)
        {
            std::cout << "You now have a magic sword to defeat the dragon!\n";
            swordDamage = 10;
            std::cout << "Sword Damage: " << swordDamage << "\n";
        }
        else
        {
            std::cout << "You refuse the sword and leave the wizard's chamber.\n";
        }
    
    }
    else
    {
        std::cout << "Invalid choice. Please choose a valid door.\n";
    }
    return 0;
}