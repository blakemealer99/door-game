#include <iostream>

int main()
{
    std::string name;
    int age;
    int favoriteNumber;

    std::cout << "What is your name? ";
    std:: cin >> name;

    std::cout << "What is your age? ";
    std::cin >> age;

    std::cout << "What is your favorite number? ";
    std::cin >> favoriteNumber;

    //Name code
    std::cout << "Hello " << name << "\n";

    //Age Code
    std::cout << "Next year you will be " << age + 1 << "\n";
    if (age >= 18)
    {
        std::cout << "You are an adult.\n";
    }
    else
    {
        std::cout << "You are a minor.\n";
    }

    //Favorite Number Code
    std::cout << "Your favorite number doubled is " << favoriteNumber * 2 << "\n";
    if (favoriteNumber > 10)
    {
        std::cout << "That's a big favorite number!\n";
    }
    else
    {
        std::cout << "That's a small favorite number!\n";
    }

    return 0;
}