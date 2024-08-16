#include <iostream>
using namespace std;

void printLine(char color) {
    for (int i = 0; i < 30; i++) {
        cout << color;
    }
    cout << endl;
}

void printAshokaChakra() {
    for (int i = 0; i < 30; i++) {
        if (i == 14 || i == 15) {
            cout << "O";  // Representing Ashoka Chakra
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

int main() {
    // Top band (Saffron color)
    for (int i = 0; i < 4; i++) {
        printLine('#');  // '#' represents saffron color
    }

    // Middle band (White color with Ashoka Chakra)
    for (int i = 0; i < 2; i++) {
        printLine(' ');  // ' ' represents white color
    }
    printAshokaChakra();
    for (int i = 0; i < 2; i++) {
        printLine(' ');  // ' ' represents white color
    }

    // Bottom band (Green color)
    for (int i = 0; i < 4; i++) {
        printLine('+');  // '+' represents green color
    }

    return 0;
}
