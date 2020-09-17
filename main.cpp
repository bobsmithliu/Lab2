#include <iostream>
#include <fstream>
#include <random>
#include <iomanip>

using namespace std;
const int intlowerbound {512};
const int intupperbound{1024};
const int dblLowerbound {50};
const int dblUpperbound{90};

double generateRandDbl() {
    default_random_engine generator(time(0));
    uniform_real_distribution<double>
            distribution(dblLowerbound, dblUpperbound);
    double randDbl = distribution(generator);
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
        file << sequence[x] << " " << setprecision(3) <<sequencePair[x] << " \n";
    }
    file.close();
    return 0;

}
