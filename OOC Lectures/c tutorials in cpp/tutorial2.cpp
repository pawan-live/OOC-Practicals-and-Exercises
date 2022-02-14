#include <iostream>

int main() {   
    int mark1, mark2;
    std::cout<<"Enter mark 1: ";
    std::cin >> mark1;
    std::cout<<"Enter mark 2: ";
    std::cin >> mark2;
    float average = (float)(mark1 + mark2)/2;
    std::cout << "Average is " << average;
    return 0; 
}