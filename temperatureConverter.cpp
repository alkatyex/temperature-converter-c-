#include <iostream>

int main(){
    double temp;
    char degree;
    double c;
    double f;

    std::cout << "What is the current temperature?: ";
    std::cin >> temp;

    std::cout << "Which conversion do you want to convert? (ANSWER IN UPPER CASE AS 'C' OR 'F'): ";
    std::cin >> degree;

    switch (degree){
        case 'C':
            c = 5.0/9.0 * (temp - 32);
            std::cout << "The converted temperature of " << temp << " is " << c << "C. ";
            break;
        case 'F':
            f = 9.0/5.0 * (temp) + 32;
            std::cout << "The converted temperature of " << temp << " is " << f << "F. ";
            break;
        default:
            std::cout << "Please try again!";
    }
}

/*
c = 5/9 (temp-32)
f = 9/5(temp) +32

*/