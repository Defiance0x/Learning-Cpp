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




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
