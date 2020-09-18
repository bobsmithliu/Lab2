//
// Created by Bob Liu on 2020/09/17.
//
#include <iostream>

#include <random>

#include <bits/stdc++.h>
#include "sort.hpp"
using namespace std;


int showEntries() {
    int entryNumber = 0;
    string entry;
    ifstream entries("Reading.txt");
    while (std::getline(entries, entry)) {
        ++entryNumber;
    }
    cout << "The numbers of entry in this file: " << entryNumber << "\n";
    return entryNumber;
}

void sorting() {
    string entry;
    ifstream entries("Reading.txt");
    double toSort[showEntries()];
    int x = 0;
    int entryNumber;
    double sum{0};
    double yetSort{0};
    while (entries >> entryNumber >> yetSort) {
        toSort[x] = yetSort;
        sum += yetSort;
        x++;
    }
    int numberOfElements = sizeof(toSort) / sizeof(toSort[0]);
    sort(toSort, toSort+numberOfElements);
    cout << "The highest reading is " << toSort[numberOfElements - 1] << "\n"
    << "The median reading is " << toSort[numberOfElements /2] << "\n"
    << "The lowest reading is " << toSort[0] << "\n"
    << "The average reading is " << setprecision(5) << sum/numberOfElements << endl;
}
