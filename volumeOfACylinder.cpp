// Copyright (c) 2022 Miguel Santacruz All rights reserved
//
// Created by: Miguel Santacruz
// Created on: May 2022
// This program finds the volume of a cylinder

#include <iostream>
#include <string>
#include <cmath>

float volume(float radius, float height) {
    float answer;

    answer = M_PI * pow(radius, 2) * height;

    return answer;
}


main() {
    // this function gets the values

    std::string radiusAsString;
    std::string heightAsString;
    float radius;
    float height;
    float solution;

    std::cout << "The radius is (mm): ";
    std::cin >> radiusAsString;
    std::cout << "The height is (mm): ";
    std::cin >> heightAsString;

    try {
        radius = std::stof(radiusAsString);
        height = std::stof(heightAsString);
        if (radius < 0 || height < 0) {
            std::cout << "Invalid input." << std::endl;
        } else {
            solution = volume(radius, height);
            std::cout << "The volume of a cylinder with radius " << radius
            << " mm and height " << height << " mm is " << solution << "mm³"
            << std::endl;
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input" << std::endl;
    }
}
