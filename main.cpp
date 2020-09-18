#include <iostream>
#include <fstream>
#include <random>
#include <iomanip>
#include "sort.hpp"
using namespace std;
const int intlowerbound {512};
const int intupperbound{1024};
const int dblLowerbound {50};
const int dblUpperbound{90};

default_random_engine dblgenerator(time(0));
uniform_real_distribution<double>
        distribution(dblLowerbound, dblUpperbound);

double generateRandDbl() {
    double randDbl = distribution(dblgenerator);

    return randDbl;
}
int main() {
    random_device rd;
    mt19937 generator(rd()); //rd creates random seed
    uniform_int_distribution<>
            distribution(intlowerbound, intupperbound);
    int sequenceLimit  = distribution(generator);
    int sequence[sequenceLimit];
    double sequencePair[sequenceLimit];
    for (int x = 0; x < sequenceLimit; x++) {
        sequence[x] = x;
    }
    for (int x = 0; x < sequenceLimit;x++) {
        sequencePair[x] = generateRandDbl();
    }
    ofstream file;
    file.open ("Reading.txt");
    for (int x = 0; x < sequenceLimit;x++){
        file << fixed;
        file << setprecision(3);
        file << x << " " << sequencePair[x] << " \n";
    }
    file.close();
    sorting();
    return 0;

}
