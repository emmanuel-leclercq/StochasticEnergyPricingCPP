//
// Created by Emmanuel Leclercq on 25/05/2024.
//
#include "../LevyProcess.hpp"

int main(int, char *[]) {

    try {}
    catch (exception &e) {
        cerr << e.what() << endl;
        return 1;
    } catch (...) {
        cerr << "unknown error" << endl;
        return 1;
    }
}