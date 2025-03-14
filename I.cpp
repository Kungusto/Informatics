#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream input("input.txt");
    ofstream output("output.txt");

    int K;
    input >> K;
    input.ignore();  // Чтобы пропустить символ новой строки после числа K

    string surname, name;
    int score, count = 0;

    while (input >> surname >> name >> score) {
        if (score > K) {
            count++;
            output << count << ") " << surname << " " << name << endl;
        }
    }

    output << count;

    return 0;
}
