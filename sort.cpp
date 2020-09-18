//
// Created by Bob Liu on 2020/09/17.
//
#include <iostream>
#include <fstream>
#include <sstream>
#include <random>
#include <iomanip>
#include <cstdlib>
#include <bits/stdc++.h>
#include "lab2.hpp"
using namespace std;

using namespace std;

int showEntries() {
    int entryNumber = 0;
    std::string entry;
    std::ifstream entries("Reading.txt");
    while (std::getline(entries, entry)) {
        ++entryNumber;
    }
    std::cout << "The numbers of entry in this file: " << entryNumber << "\n";
    return entryNumber;
}

void sorting() {
    string entry;
    ifstream entries("Reading.txt");
    double toSort[showEntries()];
    int x = 0;
    int entryNumber;
    double yetSort{0};
    while (entries >> entryNumber >> yetSort) {
        toSort[x] = yetSort;
        x++;
    }
    int numberOfElements = sizeof(toSort) / sizeof(toSort[0]);
    sort(toSort, toSort+numberOfElements);
    cout << "The highest reading is " << toSort[numberOfElements - 1] << "\n"
    << "The median reading is " << toSort[numberOfElements /2] << "\n"
    << "The lowest reading is " << toSort[0] << "\n" << endl;
}
