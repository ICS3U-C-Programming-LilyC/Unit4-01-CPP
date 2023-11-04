// Copyright (c) 2023 Lily Carroll All rights reserved.
//
// Created by: Lily Carroll
// Created on: Nov/3/2023
// This program tells calculates the
// sum of the number inputted by the user.

#include <cstdlib>
#include <iostream>

int main() {
    // Initializing the sum, counter and user number.
    int sum = 0;
    int counter = 0;
    std::string user_number_as_string;

    // Getting user input.
    std::cout << "Enter a positive number: ";
    std::cin >> user_number_as_string;

    // Initiating Try Catch.
    try {
        int user_number_as_integer = std::stoi(user_number_as_string);

        // If statement to check for negatives.
        if (user_number_as_integer <= 0) {
            std::cout << "Please enter a positive number.";
        } else {
            while (counter <= user_number_as_integer) {
                sum = sum + counter;
                std::cout << "Tracking " << counter
                << " times through the loop.\n";
                counter = counter + 1;
            }

            // Displaying the sum back to the user.
            std::cout << "The sum of your number "
            << user_number_as_integer << " is "
            << sum;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input.";
    }
}
