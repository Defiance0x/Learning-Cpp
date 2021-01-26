// Learning_2021.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

int calculation(int x, int y)
{
    int z = 0;

    for (int i = x; i < y; i++)
    {
        z += i;
    }
    return z;
}

double my_function(double x)
{
    return pow(x, 2.0);
}

double trapezium_rule(double start, double end, int intervals)
{
    double step = std::abs(end - start) / intervals; // also the height of each trapezium
    double middle = 0;

    //std::cout << step << std::endl;
    //std::cout << middle << std::endl;

    for (double i = 0; i <= intervals; i++)
    {
        middle += my_function(start+ (i*step));
        //std::cout << "middle loop = " << middle << std::endl;
    }

    //std::cout << "start = " << my_function(start) << "end = " << my_function(end) << std::endl;
    //std::cout << "middle = " << middle << std::endl;

    double calc = 0.5*step*(my_function(start) + my_function(end) + (2*middle));

    //std::cout << "calc = " << calc << std::endl;

    return calc;
}

int main()
{
    //std::cout << calculation(1,5) << std::endl;
    std::cout << trapezium_rule(0, 4, 50000) << std::endl;
}

