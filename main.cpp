#include <iostream>
#include <fstream>
#include <random>
using namespace std;

void writeNumberToFile() {
    ofstream file;
    file.open ("Reading.txt");
    file << "Please writr this text to a file.\n this text is written using C++\n";
    file.close();
}
int main() {
    const int intlowerbound {512};
    const int intupperbound{1024};
    random_device rd;
    mt19937 generator(rd()); //rd creates random seed
    uniform_int_distribution<>
            distribution(intlowerbound, intupperbound);
    int sequenceLimit  = distribution(generator);
    int sequence[sequenceLimit];
    for (int x = 0; x < sequenceLimit; x++) {
        sequence[x] = x;
    }
    return 0;

}
