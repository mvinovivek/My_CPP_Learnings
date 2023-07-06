#include <iostream>

int main()
{
    int number{};

    // to get the user input, we can use the cin function from the std library
    std::cout << "Enter a number \n ";
    std::cin >> number;
    // Look at >> symbol. This indicates the whatever the user input is, that is being stored in the variable next to it

    /*
    By default the cin function will accept the user input till the user presses the "Enter" key
    */

    std::cout << "You entered : " << number << '\n';
}