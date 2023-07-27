#include <iostream>
#include <vector>

int main()
{
    std::vector<int> numbers{1, 2, 3, 4};

    std::cout << numbers[5];    // This will result in some undefined behaviour
    std::cout << numbers.at(5); // This should throw compilation error
}