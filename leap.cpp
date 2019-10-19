// Copyright (c) 2019 Joseph Palermo All rights reserved.
//
// Created by: Joseph Palermo
// Created on: October 2019
// This program checks if a year is a leap year


#include <iostream>

int main() {
    // This function checks if a year is a leap year

    // variables
    int userYear;

    // input
    std::cout << "Enter a year: " << std::endl;
    std::cin >> userYear;

    // process & output
    if (userYear % 4 == 0) {
        if (userYear % 100 == 0) {
            if (userYear % 400 == 0) {
                std::cout << "It is a leap year";
            } else {
                  std::cout << "It is not a leap year";
            }
        } else {
              std::cout << "It is a leap year";
        }
    } else {
            std::cout << "It is not a leap year";
    }
}
