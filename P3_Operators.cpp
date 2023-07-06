#include <iostream>

/*
This program lists the available basic math operators
*/

int main()
{

    int number1{10};
    int number2{3};

    double side{2.5};

    // Unary operators - needs only one input
    //  ++ increases the value of the variable by one
    //  -- decreases the value of the variable by one
    // based on their location they will have different behaviour

    std::cout << "Number is : " << number1 << '\n';

    // Here the number 1 is sent to the output then the value is increased. Output 10, but number value is 11
    std::cout << "Number ++ is : " << number1++ << '\n';

    // Here the number will be increased by 1. So it will be 11+1. Outputs 12
    std::cout << "Number ++ is : " << ++number1 << '\n';

    // Here the number (12) will be printed first then value will be reduced. Outputs 12
    std::cout << "Number -- : " << number1-- << '\n';

    /*
    Binary Operations
     + is addition
     - is subtraction
     * is multiplication
     / is integer division by default. Only gives quotient if two ints are operated, give float if one of them is float
     % is modulus operator which gives the remainder of a division
    */

    int sum = number1 + number2;
    int difference = number1 - number2;
    int product = number1 * number2;
    int quotient = number1 / number2;
    double division = number1 / side;
    int remainder = number1 % number2;

    std::cout << "Adding numbers : " << number1 << " " << number2 << " will be : " << sum << '\n';
    std::cout << "Difference between : " << number1 << ' ' << number2 << " is: " << difference << '\n';
    std::cout << "Product of : " << number1 << " and " << number2 << " will be : " << product << '\n';
    std::cout << "Quotient of : " << number1 << " to " << number2 << " will be : " << quotient << '\n';
    std::cout << "Dividing  : " << number1 << " by " << number2 << " will be : " << division << '\n';
    std::cout << "Remainder of dividing :" << number1 << " by " << number2 << " will be : " << remainder << '\n';

    /*
    Self operators

    +=, -=, *=, /=

    These operators can operate on a single variable only. Mostly to update the value of existing variable
    */

    // number = number + 10 can be written as
    number1 += 500;                                       // This statement will add 10 to the variable number1 and updates its value
    std::cout << "After adding 10 : " << number1 << '\n'; // Should print 511

    /*
    Logical operators are used  with boolean values
    */

    bool condition1{true};
    bool condition2{false};

    bool isOneTrue = condition1 || condition2;
    bool isBothTrue = condition1 && condition2;
    bool changed1 = !condition1;
    bool changed2 = !condition2;

    std::cout << "Is One true value is there :" << isOneTrue << '\n';
    std::cout << "Is both values are true :" << isBothTrue << '\n';
    std::cout << "Changed value for one :" << changed1 << '\n';
    std::cout << "Changed value for two :" << changed2 << '\n';
}