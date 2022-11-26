// Copyright (c) 2022 Kent Gatera All rights reserved.
// .
// Created by: Kent Gatera
// Date: Nov 24, 2022
// This program converts celsius to fahrenheit.

#include <iomanip>
#include <iostream>
#include <string>

// Defining the conversion function.
void fahrenheit() {
    try {
        std::string tempCelsiusStr;
        float tempCelsius;
        std::cout << "What is the temperature?(C) :";
        std::cin >> tempCelsiusStr;
        // Using "stof" instead of stoi to convert to float.
        tempCelsius = stof(tempCelsiusStr);

        // I put the formula over here because
        // The variables need to be declared in the same scope.
        float tempFahrenheit = (1.8 * tempCelsius + 32);
        std::cout << std::fixed << std::setprecision(2) <<
        tempCelsius << " C = "<< tempFahrenheit << " F";
    } catch (std::invalid_argument) {
        std::cout << "Invalid input." << '\n';
    }
}

// Calling the function that calls the fahrenheit function.
int main() {
    // The main function, "main" seems to be some special function.
    // main() is calling and executing fahrenheit().
    fahrenheit();
}
