// Copyright (c) 2021 Mikayla Barthelette All rights reserved
//
// Created by: Mikayla Barthelette
// Created on: Sept 2021
// This program creates a number guessing game

#include <iostream>


int main() {
    // this function creates the game
    const int CORRECT_NUMBER = 5;

    int number_guessed;


    // Input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin >> number_guessed;

    // Process
    if (number_guessed == CORRECT_NUMBER) {
        std::cout << "You guessed correct!";
    } else {
        std::cout << "You guessed wrong!";
    }

    // Output
    std::cout << "" << std::endl;
    std::cout << std::endl;
    std::cout << "Done." << std::endl;
}
