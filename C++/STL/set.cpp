#include <iostream>
#include <set>

int main()
{
    std::set<int> coll;    // set container for ints

    // insert seven unordered elements with the values 1 to 6
    coll.insert(3);
    coll.insert(1);
    coll.insert(5);
    coll.insert(4);
    coll.insert(6);
    coll.insert(2);
    coll.insert(1);

    // output all elements followed by a space
    std::set<int>::iterator pos;
    for (pos = coll.begin(); pos != coll.end(); ++pos) {
        std::cout << *pos << ' ';
    }

    // finally output a newline
    std::cout << std::endl;
}
