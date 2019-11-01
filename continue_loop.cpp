// Copyright (c) 2019 Joey Marcotte All rights reserved.
//
// Created by: Joey Marcotte
// Created on: October 2019
// This program shows continue loops
// with user input

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    int totalNumber = 0;
    int counter = 0;
    std::string numberAsString;
    int numberAsNumber;
    std::string amountOfNumbersAsString;
    int amountOfNumbersAsNumber;

    std::cout << "Input the amounts of numbers you would like to add: ";
    std::cin >> amountOfNumbersAsString;

    try {
        amountOfNumbersAsNumber = std::stoi(amountOfNumbersAsString);

        while (counter < amountOfNumbersAsNumber) {
            // process
            std::cout << "Input a number to add: ";
            std::cin >> numberAsString;
            try {
                numberAsNumber = std::stoi(numberAsString);
                if (numberAsNumber < 0) {
                    counter = counter + 1;
                    continue;
                } else if (numberAsNumber >= 0) {
                    totalNumber = numberAsNumber + totalNumber;
                    counter = counter + 1;
                    continue; }
            } catch (std::invalid_argument) {
                std::cout << "Not a valid number" << std::endl; }
        } std::cout << "Sum of all numbers is " << totalNumber <<std::endl;
    } catch (std::invalid_argument) {
            std::cout << "Not a valid number" << std::endl;
    }
}
