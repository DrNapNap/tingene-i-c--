#include <iostream>

int main()
{
    int x; // declaration
    int y = 5; // declaration
    x = 5;  // assignment
    int sum = x + y;

    std::cout << x << '\n';
    std::cout << y << '\n';
    std::cout << sum << '\n';

    // integer (whole number)
    int age = 21;
    int year = 2023;
    int days = 7.5; // det kan du ikke der er en int

    //double (number including decimal)
    double price = 10.99;
    double gpa = 2.5;
    double temp = 25.1;

    //including decimal
    std::cout << price << '\n'; 
    // ikke including decimal
    std::cout << days << '\n';

    // single character
    char grade = 'A';
    // char grade2 = 'AA';

    // Ikke single character
    // std::cout << grade2;
    // single character
    std::cout << grade << '\n';

    // bool (true or false)
    bool power = true;

    // string (objects that represents a sequence of text)
    std::string name = "Nap";
    std::string day = "Friday";

    std::cout << "Hey " << name << '\n';
    std::cout << "You are " << age << " years old" << '\n';
    return 0;
}



