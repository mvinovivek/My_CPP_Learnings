#include <iostream>

int main()
{
    // If statement is used to check whether a condition is true.

    int marks{20};

    // if statement single line of code
    if (marks >= 35)
        std::cout << "You are Pass! \n";

    // If statement with block of code
    if (marks >= 35)
    {
        std::cout << "You are Pass! \n";
        std::cout << "Way to Go! \n";
    }

    // If Else
    if (marks >= 35)
    {
        std::cout << "You are Pass! \n";
        std::cout << "Way to Go! \n";
    }
    else
        std::cout << "You failed! \n"; // single line of code for else

    // If Else
    if (marks >= 35)
    {
        std::cout << "You are Pass! \n";
        std::cout << "Way to Go! \n";
    }
    else
    {
        std::cout << "You failed! \n";
        std::cout << "You should study well \n"; // code block for else as well
    }

    /*
    else if can be used to check multiple conditions as well
    */

    int mark{135};

    if (mark > 100)
        std::cout << "Invalid Mark \n";
    else if (mark >= 80 && mark <= 100)
        std::cout << "Your Grade is : A \n";
    else if (mark >= 60 && mark < 80)
        std::cout << "Your Grade is : B \n";
    else if (mark >= 35 && mark < 60)
        std::cout << "Your Grade is : C \n";
    else
        std::cout << "You Failed \n";

    /*
    For a simple if else statement one can use the ternary operation as well
    syntax is
    condition ? execute if true : execute if false
    */
    marks > 35 ? std::cout << "You passed!" : std::cout << "You Failed!";
}