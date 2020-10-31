#include <iostream>

constexpr double func(const double x, const double y)
{
    return 3*x - 2*y;
}

constexpr double func1(const double x, const double y)
{
    return -y * y;
}

double euler(const double x0, const double y0, const double h, double (*f)(const double, const double), const double e = 0.01)
{
    double err = 0;
    double y_prev = y0;
    double y = 0;
    double x = x0;

    for (int i = 0; i < 1000000; i++)
    {
        y = y_prev + h * f(x, y_prev);
        err = y_prev - y;
        std::cerr << y << '\t' << err << '\n';
        if (err <= e)
        {
            break;
        }
        x = x + h;
        y_prev = y;
    }
    
    return y;
}