//
// Created by Bob Liu on 2020/09/17.
//
#include <iostream>
#include <fstream>
#include <random>
#include <iomanip>
#include "lab2.hpp"
using namespace std;

using namespace std;

int showEntries() {
    int entries = 0;
    std::string line;
    std::ifstream myfile("Reading.txt");
    while (std::getline(myfile, line))
        ++entries;
    std::cout << "Number of lines in text file: " << entries;
    return entries;
}

int sort() {

}
