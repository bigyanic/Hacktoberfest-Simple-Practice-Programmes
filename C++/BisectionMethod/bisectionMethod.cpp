#include "bisectionMethod.h"

/**
 * Bisection method
 *  "the bisection method is a root-finding method that applies to any
 *  continuous functions for which one knows two values with opposite signs.
 *  The method consists of repeatedly bisecting the interval
 *  defined by these values and then selecting the subinterval
 *  in which the function changes sign, and therefore must contain a root." - Wikipedia
 *  https://en.wikipedia.org/wiki/Bisection_method
*/
template<typename T>
T abs(const T x)
{
    return (x >= 0) ? x : -x;
}

double bisection(double a, double b, double (*f)(const double), const double e)
{
    for (int i = 0; i < 1000000 && abs(b - a) > e; ++i)
    {
        double x_m = (a + b) / 2;
        double f_m = f(x_m);
        double f_a = f(a);
        double f_b = f(b);

        if (f_a == 0.0)
        {
            return a;
        }

        if (f_b == 0.0)
        {
            return b;
        }

        if (f_m == 0.0)
        {
            return x_m;
        }

        if ((f_b * f_m) > 0.0)
        {
            b = x_m;
        }
        else if ((f_b * f_m) < 0.0)
        {
            a = x_m;
        }
    }
    return (a + b) / 2;
}