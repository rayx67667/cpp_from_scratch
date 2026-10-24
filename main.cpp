#include <iostream>
#include <string>


int main(void)
{
    std::string name;
    int age;
    int current_year = 2026;

    std::cout << "Enter your name" << std::endl;

    std::getline (std::cin, name);

    std::cout << "Enter your age" << std::endl;
    std::cin >> age;

    int value = current_year + (100-age);


    std::cout << "Your name is " << name << " and your age is " << age << " 100 years old in " << value << std::endl;

    return 0;
}