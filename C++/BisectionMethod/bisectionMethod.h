
// Example functions
constexpr double func1(const double x)
{
    return -(x * x * x) + 3;
}

constexpr double func2(const double x)
{
    return x*x - 4*x + 2;
}

constexpr double func3(const double x)
{
    return x*x*x - x - 2;
}

double bisection(const double a, const double b, double (*f)(const double), const double e);