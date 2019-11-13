#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    std::vector<int> coll;             // vector container for ints
    std::vector<int>::iterator pos;    // iterator

    // insert elements 1 to 6 into the collection, unsorted
    coll.push_back(2);
    coll.push_back(5);
    coll.push_back(4);
    coll.push_back(1);
    coll.push_back(6);
    coll.push_back(3);

    // output minimum and maximum element
    pos = std::min_element(coll.begin(), coll.end());
    std::cout << "min: " << *pos << std::endl;
    pos = std::max_element(coll.begin(), coll.end());
    std::cout << "max: " << *pos << std::endl;

    // sort all elements elements in ascending order
    std::sort(coll.begin(), coll.end());

    // reverse order of elements
    std::reverse(coll.begin(), coll.end());

    // output all elements
    for (pos=coll.begin(); pos!=coll.end(); ++pos) {
        std::cout << *pos << ' ';
    }
    std::cout << std::endl;
}
