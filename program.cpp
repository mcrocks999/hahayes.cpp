#include <iostream>
#include <string>

using namespace std;

void up(int lines = 1);
void down(int lines = 1);

int main(int argc, char *argv[]) {
    //zuccernator

    down(10);

    cout << "this should be below";

    up(2);

    cout << "\rand this above";
    cout << "\n";
    //cout << "hahayes" << endl;

    return 0;
}

void up(int lines) {
    cout << "\x1b[" << lines <<"A";
}

void down(int lines) {
    cout << "\x1b[" << lines <<"B";
}
