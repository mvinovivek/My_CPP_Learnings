#include <iostream>

/*
Functions are blocks of code that can be used multiple times to avoid repetition
*/

// function declaration can be similar to variable declaration but will include ()

// function with no return
void printHello();

// function with no return and accepts input
void printHello(std::string name); // We need to pass an input to this function which is to be a string only

// function with int return
int squared(int number);

// function with multiple inputs
double volume(double radius, double height);

// function overloading
// Here we are declaring multiple functions with the same name. This is allowed as long as the function takes different input parameters.
// Based on the input appropiate function will be called.

int addTwo(int input1, int input2);
double addTwo(double input1, double input2);
std::string addTwo(std::string input1, std::string input2);

void mixed(int age, std::string name);

int main()
{

    printHello();

    std::string name{"Winnie"};
    printHello(name);

    int number{4};
    std::cout << number << " Squared will be " << squared(number) << '\n';

    double radius{2.5};
    double height{8.5};
    std::cout << "Volume of cylinder with radius " << radius << " and height " << height << " is " << volume(radius, height) << '\n';

    int num1{4};
    int num2{6};

    double num3{5.5};
    double num4{6.4};

    std::string name1{"Bob"};
    std::string name2{"Hill"};

    // Here I am calling the same function but with different inputs and they all behave differently
    std::cout << "With integers : " << addTwo(num1, num2) << '\n';
    std::cout << "With Doubles : " << addTwo(num3, num4) << '\n';
    std::cout << "With Strings : " << addTwo(name1, name2) << '\n';

    // The following should not work as there are no functions with a integer and string input
    // std::cout << "With Strings : " << addTwo(num1, name2);

    int age{21};
    mixed(age, name);
}

// Actual functions are here

void printHello()
{
    std::cout << "Hello World! \n";
};

void printHello(std::string name)
{
    std::cout << "Hello " << name << " \n";
};

int squared(int number)
{
    return number * number;
}

double volume(double radius, double height)
{
    double vol_val = radius * 3.14 * height * radius;
    return vol_val;
}

int addTwo(int input1, int input2)
{
    return input1 + input2;
}

double addTwo(double input1, double input2)
{
    return input1 + input2;
}

std::string addTwo(std::string input1, std::string input2)
{
    return input1 + +" " + input2;
}

void mixed(int age, std::string name)
{
    std::cout << "Hello " << name << "! You are " << age << " years old!" << '\n';
}