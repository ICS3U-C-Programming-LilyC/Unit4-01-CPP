// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/3/2023
// This program tells calculates the
// sum of the number inputted by the user.

#include <cstdlib>
#include <iostream>

int main() {
    // Declaring variables.
    int counter = 0;
    int sum = 0;
    int userNumber;
    // Created a variable for if the user inputs
    //a float instead of a whole number.
    float userNumberFloat;
    std::string userNumberString;

    // Explaining my program to the user.
    std::cout << 
    "This program will calculate the sum of the number that you enter.\n";

    // Getting user input.
    std::cout
        << "Enter a positive integer: ";
    std::cin >> userNumberString;

    // Initiating Try Catch.
    try {
        // Converting a float into a string.
        userNumberFloat = std::stof(userNumberString);

        // Converting a string into an integer.
        userNumber = std::stoi(userNumberString);

        // If statement for decimal input.
        if (userNumberFloat != userNumber) {
            std::cout << "Invalid input.";

            // Else if statement for negative number input.
        } else if (userNumber <= 0) {
            std::cout << "Please enter a positive number.";

            // Else statement for valid input.
        } else {
            while (counter <= userNumber) {
                std::cout << "Tracking " << counter << " times through the loop." << std::endl;

                // Calculating the sum of the user's number.
                sum = sum + counter;

                // Incrementing the counter each time.
                counter = counter + 1;
            }

            // Displays the sum of the user's number back to them.
            std::cout << "The sum of your number " << userNumber
                      << " is " << sum;
        }

        // Catching errors or any invalid inputs.
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
