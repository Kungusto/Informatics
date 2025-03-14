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

    string name, breed;
    int age, count = 0;

    while (input >> name >> age >> breed) {
        if (age < K) {
            output << name << " " << age << " " << breed << endl;
            count++;
        }
    }

    output << count;

    return 0;
}
