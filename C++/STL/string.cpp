#include <iostream>    // C++ header file for I/O
#include <string>      // C++ header file for strings

int main()
{
    // create two strings
    std::string firstname = "bjarne";
    std::string lastname = "stroustrup";
    std::string name;

    // manipulate strings
    firstname[0] = 'B';
    lastname[0] = 'S';

    // chain strings
    name = firstname + " " + lastname;

    // compare strings
    if (name != "") {
        // output strings
        std::cout << name
                  << " is the founder of C++" << std::endl;
    }

    // determine number of characters in a string
    int num = name.length();
    std::cout << "\"" << name << "\" has " << num
              << " characters" << std::endl;
}
