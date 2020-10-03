#include <iostream>

main()
{
    std::cout << "Size of char: " << sizeof(char) << " byte;" << "\n";
    std::cout << "Size of int: " << sizeof(int) << " bytes" << "\n";
    std::cout << "Size of float: " << sizeof(float) << " bytes" << "\n";
    std::cout << "Size of double: " << sizeof(double) << " bytes" << "\n";

    std::cout << "-----------------------------------------------------\n" ;

    std::cout << "Calculate the product of two numbers\n";
    float n1, n2;
    double product;
    std::cout << "Enter the two number : \n";
    std::cin >> n1 >> n2;

    product = n1 * n2;
    std::cout << "Product: " << product;
}
