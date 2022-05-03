// Copyright (c) 2022 Sarah All rights reserved.
//
// Created by: Sarah
// Created on: May, 1st, 2022
// This program displays all the numbers from 1000 to 2000 using a for loop. If
// the number is divisible by 5, it starts a new line.
#include <iostream>


int main() {
    // declare variables
    int counter;


    // prints all numbers from 1000 to 2000 & then displays to user.
    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 == 0 && counter != 1000) {
            std::cout << std::endl;
        }
        std::cout << counter << " ";
    }
}
