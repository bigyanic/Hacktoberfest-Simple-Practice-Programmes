constexpr double func(const double x, const double y)
{
    return 3*x - 2*y;
}

constexpr double func1(const double x, const double y)
{
    return -y * y;
}

double euler(const double x0, const double y0, const double h, double (*f)(const double, const double), const double e = 0.01);