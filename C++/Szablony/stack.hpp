#ifndef EXPL_HPP
#define EXPL_HPP

// declaration of the function template max()
template <typename T>
const T& max(const T& a, const T& b);

// declaration of the class template Stack<>
#include <vector>

// **** BEGIN namespace CPPBook ********************************
namespace CPPBook {

template <typename T>
class Stack {
  private:
    std::vector<T> elems;  // elements
  public:
    Stack();               // constructor
    void push(const T&);   // store new top element
    void pop();            // remove top element
    T top() const;         // return top element
};

} // **** END namespace CPPBook ********************************

#endif // EXPL_HPP
