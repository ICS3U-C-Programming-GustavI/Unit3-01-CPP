// Copyright 2025 (c) All rights reserved
// Created by : Gustav I
// Created on : March 20, 2025
// This program calculates the tax price and
// total for Newfoundland and Labrador.

#include <iostream>

int main() {
    // Fixed tax rate for Newfoundland and Labrador
    const float tax_rate = 15;

    // Get user input
    float subtotal;
    std::cout << "Enter the subtotal: ";
    std::cin >> subtotal;

    // Calculations for tax and total amounts
    float tax_amount = (subtotal * tax_rate) / 100;
    float total = subtotal + tax_amount;

    // Outputting tax and total amount to user
    std::cout << "Tax: $" << tax_amount << std::endl;
    std::cout << "Total including tax: $" << total << std::endl;

    return 0;
}
