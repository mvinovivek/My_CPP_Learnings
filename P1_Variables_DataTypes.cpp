#include <iostream>

// A variable is a container that is used to hold a value.

int main()
{
    // A variable can be declared by the syntax : datatype variableName ;
    int number;

    // A value can be assigned to a variable with = operator called assignment operator
    number = 18;

    // Though the above method works, it is not recommended for various reasons.
    // The modern way of declaring and initializing the variable is as follows
    int age{18};

    // In the above line, I am declaring an integer with name age and assigning a value of 18.
    // One can do the zero initialization as follows

    int anotherNumber{}; // This will initialize the variable with value 0

    // Following are the common datatypes available in C++

    int year{2023};                 // Holds the integer value
    unsigned int numberSteps{2033}; // Holds only the positive values
    float balance{10.22};           // floating point numbers (32 bits in size)
    double pi{3.145897131};         // floating point numbers (64 bits in size)
    char grade{'S'};                // char can hold only a single character (1 bit in size)
    bool isPass{true};              // boolean type (true or false)

    // To know the size of memory particular datatype requires can be known by using sizeof function

    std::cout << "Size of Integer is : " << sizeof(int) << " bits \n";
    std::cout << "Size of Float is : " << sizeof(float) << " bits \n";
    std::cout << "Size of Double is : " << sizeof(double) << " bits \n";
    std::cout << "Size of Character is : " << sizeof(char) << " bits \n";
    std::cout << "Size of Boolean is : " << sizeof(bool) << " bits \n";

    // One can display a particular variable value in the output as follows
    std::cout << year << "\n";
    std::cout << age << "\n";
    std::cout << number << "\n";
    std::cout << anotherNumber << "\n";
    std::cout << balance << "\n";
    std::cout << numberSteps << "\t" << pi << '\t' << grade << '\t' << isPass << '\n';

    // One of the useful type is constant
    const int truth{43};
    // By declaring a variable as constant we are telling the compiler that this value will not change.
    // When someone tries to change the value of the const, the compiler will throw an error.

    truth = 50; // This line is error prone and will not compile!
}