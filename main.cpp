#include <iostream>
#include <gsl/gsl> // This is the line that fails in the main project

int main()
{
    std::cout << "Hello, GSL!" << std::endl;
    int i = 0;
    gsl::owner<int*> p = &i; // Use a type from GSL to ensure it's linked
    *p = 42;
    std::cout << "Value: " << i << std::endl;
    return 0;
}
