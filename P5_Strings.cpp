#include <iostream>
#include <algorithm>

int main()
{

    // String in C++ are a derived datatype provided by the standard library. There are lot of things one can do with strings.

    std::string sentence{};
    std::cout << "Enter a sentence \n";
    std::cin >> sentence;
    std::cout << "You entered : \n";
    std::cout << sentence << '\n';

    // After running this program, one can see that the output will only contain the first word of the sentence and ignores the rest.
    // To get the entire line from the user, one need to use the getline method from the std library

    std::string sentence1{};
    std::cout << "\n\n*********\n";
    std::cout << "Enter a new sentence \n";
    std::cin.sync(); // This line is critical as it clears the input buffer and accepts input. Otherwise you will not be able
                     // to read from the input terminal. Look it up in google. Other alternatives are cin.clear(). cin.ignore()
    std::getline(std::cin, sentence1);
    std::cout << "Now You entered : \n";
    std::cout << sentence1;

    // Useful functions with Strings
    std::string sentence2{"This is a big sentence"};

    // To know the size of the string. Returns the int
    std::cout << sentence2.size() << '\n';

    // To check whether the string is empty. returns a boolean
    std::cout << sentence2.empty() << '\n';

    // To add text at the end of the string
    sentence2 = sentence2.append(" Added Text");
    std::cout << sentence2 << '\n';

    // To remove the last letter. pops the character out
    sentence2.pop_back();
    std::cout << sentence2 << '\n';

    // To add a given character to the last index of the string. Pushes it to the string
    sentence2.push_back('A');
    std::cout << sentence2 << '\n';

    // To know the length of the string
    std::cout << sentence2.length() << '\n';

    // To find the index of the given string in the string
    std::cout << sentence2.find("Added") << '\n';

    // To replace a certain portion of the string. Syntax is replace(starting_index,no_of_chars_to_be_replaced,replacement_string)
    sentence2 = sentence2.replace(5, 6, "random");
    std::cout << sentence2 << '\n';

    // To extract a portion of a string. Syntax is substr(starting_index, number_of_chars)
    std::string subString = sentence2.substr(0, 6);
    std::cout << subString << '\n';

    // To clear a string
    sentence2.clear();
    std::cout << sentence2.empty() << '\n'; // Should print 1 or true

    /*
    One of the surprising element of strings in C++ is that they cannot be easily transformed to upper or lowercase.
    There is a default method called toupper which will convert the **char** to the uppercase. So for string one need to create a hack or a function
    */

    // Unoptimized hack I am writing here
    std::string myString{"this is all lower case"};
    for (int i = 0; i <= myString.length(); i++)
    {
        myString[i] = toupper(myString[i]);
    };
    std::cout << myString << '\n'; // should print all text in upper case

    // More common practice seems to be using the transform function from the algorithms header
    transform(myString.begin(), myString.end(), myString.begin(), ::tolower); // here i am converting upper case to lower case values
    std::cout << myString << '\n';                                            // should be all lower case
}