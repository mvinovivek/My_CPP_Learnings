// IO stream is the default library which is helpful for input and output
// include statement will tell the compiler to include the files in the current folder
// In modern C++, one doesn't need to include the .h at the end of the file
#include <iostream>

// Every C++ program should have the main function. By Default the main function will return a integer. Unlike C, where the
// main function can be of type void.
int main()
{

    // std stands for standard library which has many useful functions
    //  :: is called  the scope resolution operator.
    //  We are telling the compiler to use the cout function from the std namespace.
    //  Namespaces will be explored in detail in a future separate program

    std::cout << "Hello World!" << std::endl;
    std::cout << "I am Learning C++!" << '\n';

    // Note the semicolon at the end of the line. It is mandatory and cannot be skipped.

    /*

    endl stands for end of line. This will end the current line in the output and insert the cursor in the next line
    One of the major drawback of this particular way is that it clears the buffer every time it is called resulting in
    small performance loss. Hence it is always recommended to use the '\n' keyword which does the same function but doesn't
    clear the buffer. So good for printing a lot of texts.

    */

    // Marks single comment and /* .... */ marks the multiline comment. comments are usually skipped by the compiler
}