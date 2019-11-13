#ifndef FRACTION_HPP
#define FRACTION_HPP

// include standard header files
#include <iostream>

namespace CPPBook {

class Fraction {

  private:
    int numer;
    int denom;

  public:
    /* new: error class
     */
    class DenomIsZero {
    };

    /* default constructor, and one- and two-paramter constructor
     */
    Fraction(int = 0, int = 1);

    /* multiplication
     * - global friend function, so that an automatic
     *     type conversion of the first operand is possible
     */
    friend Fraction operator * (const Fraction&, const Fraction&);

    // multiplicative assignment
    const Fraction& operator *= (const Fraction&);

    /* comparison
     * - global friend function, so that an automatic
     *      type conversion of the first operand is possible
     */
    friend bool operator < (const Fraction&, const Fraction&);

    // output to and input from a stream
    void printOn(std::ostream&) const;
    void scanFrom(std::istream&);

    // explicit type conversion to double
    double toDouble() const;
};

/* operator *
 * - global friend function
 * - defined inline
 */
inline Fraction operator * (const Fraction& a, const Fraction& b)
{
    /* simply multiply denomiator and numerator
     * - no reducing yet
     */
    return Fraction(a.numer * b.numer, a.denom * b.denom);
}

/* standard output operator
 * - overload globally and define inline
 */
inline
std::ostream& operator << (std::ostream& strm, const Fraction& f)
{
    f.printOn(strm);    // call member function for output
    return strm;        // return stream for chaining
}

/* standard input operator
 * - overload globally and defined inline
 */
inline
std::istream& operator >> (std::istream& strm, Fraction& f)
{
    f.scanFrom(strm);   // call member function for input
    return strm;        // return stream for chaining
}

}

#endif  // FRACTION_HPP
