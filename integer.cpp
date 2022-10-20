// Copyright (c) 2022 Joanne Santhosh All rights reserved
//
// Created by: Joanne Santhosh
// Created on: Oct 2022
// This is the guessing game program

#include <iostream>
#include <cmath>

int main() {
    // this function checks if a number is positive or negative
    int userInput;

    // input
    std::cout << "Enter a positive or negative integer: ";
    std::cin >> userInput;

    // process
    if (userInput > 0) {
        std::cout << userInput << " is a positive number"
        << "" << std::endl;

    } else if (userInput < 0) {
        std::cout << userInput << " is a negative number"
        << "" << std::endl;

    } else if (userInput == 0) {
        std::cout << userInput << " is just 0"
        << "" << std::endl;
    } else {
        std::cout << "No idea!";
    }

    std::cout << "\nDone." << std::endl;
}
