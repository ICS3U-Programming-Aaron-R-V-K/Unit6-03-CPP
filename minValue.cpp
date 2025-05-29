// Copyright (2025) Aaron Rivelino All rights reserved.
// Date: May 28, 2025
// The program generates 10 random number ans displays them
// Then it call the function and finds the min value

#include <array>
#include <cstdlib>
#include <ctime>
#include <iostream>

// Constants
const int MAX_ARRAY_SIZE = 10;
const int MIN_NUM = 0;
const int MAX_NUM = 100;

// Function to find the minimum value in the array
int findMinValue(const std::array<int, MAX_ARRAY_SIZE> arrayOfInt) {
    // Start with the first number as the minimum
    int minValue = arrayOfInt[0];

    // Loop through the array using a For loop
    for (int i = 1; i < arrayOfInt.size(); ++i) {
        // If the number is less than minValue, update minValue
        if (arrayOfInt[i] < minValue) {
            minValue = arrayOfInt[i];
        }
    }

    // Return the lowest value found
    return minValue;
}

int main() {
    // Seed the random number generator
    std::srand(std::time(NULL));

    // Declare a fixed-size array of integers
    std::array<int, MAX_ARRAY_SIZE> arrayOfInt;

    // Fill array with random numbers and print them
    for (int i = 0; i < arrayOfInt.size(); ++i) {
        // Generate random number in range [MIN_NUM, MAX_NUM]
        int range = MAX_NUM - MIN_NUM;
        int num = (std::rand() % (range + 1)) + MIN_NUM;
        // Store and print
        arrayOfInt[i] = num;
        std::cout <<"The random number generated is:" << num << std::endl;
    }

    // Find and print the minimum value
    int lowestValue = findMinValue(arrayOfInt);
    std::cout << "Min value is " << lowestValue << std::endl;
}
