#include <iostream>

int main()
{
    int doorChoice;
    int wizardChoice;
    int swordDamage = 0;
    int dragonChoice;
    int dungeonChoice;


    std::cout << "You see two doors. \n";
    std::cout << "1. Door 1 \n";
    std::cout << "2. Door 2 \n";
    std::cout << "3. Door 3 \n";
    std::cout << "4. Door 4 \n";


    std::cout << "Choose a door: ";
    std::cin >> doorChoice;

    if (doorChoice == 1)
    {
        std::cout << "A dragon appears!\n";

        std::cout << "1. Fight the dragon\n";
        std::cout << "2. Run away\n";
        std::cout << "Choose: ";
        std::cin >> dragonChoice;

        if (dragonChoice == 1)
        {
            if (swordDamage > 0)
            {
                std::cout << "You defeat the dragon with your magic sword!\n";
            }
            else
            {
                std::cout << "You are no match for the dragon!\n";
            }
        }
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

    if(doorChoice == 4)
    {
        std::cout << "*Click*. The door locks behind you. You found a dungon! Ahead are 5 other doors. \n";
        std::cin >> dungeonChoice;

        for(int i = 1; i <= 5; i++)
        {
            std::cout << "You see door " << i << ".\n";
        }
    }



    return 0;
}