//
// Created by Emmanuel Leclercq on 25/05/2024.
//
#include <iostream>
#include "../include/LevyProcess.hpp"

int main(int, char *[]) {
    try {
    } catch (std::exception &e) {
        std::cerr << e.what() << std::endl;
        return 1;
    } catch (...) {
        std::cerr << "unknown error" << std::endl;
        return 1;
    }
}
