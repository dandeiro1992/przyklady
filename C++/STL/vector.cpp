#include <iostream>
#include <vector>

int main()
{
    std::vector<int> coll;    // vector container for ints

    // insert elements with the values 1 to 6
    for (int i=1; i<=6; ++i) {
        coll.push_back(i);
    }

    // output all elements followed by a space
    for (unsigned i=0; i<coll.size(); ++i) {
        std::cout << coll[i] << ' ';
    }

    // finally output a newline
    std::cout << std::endl;
}
