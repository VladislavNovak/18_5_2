#include <iostream>

using std::cout;
using std::endl;

int getJumpsNumber(int stairRung, int jumpsNumber = 0) {
    if (stairRung <= 1) return 1;

    while (stairRung) {
        jumpsNumber += getJumpsNumber(--stairRung);
    }

    return jumpsNumber;
}

int main() {
    const unsigned int stairRung = 3;

    cout << "jumps number: " << getJumpsNumber(stairRung) << endl;
}
