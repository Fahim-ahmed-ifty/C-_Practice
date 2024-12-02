#include <iostream>

int main(int argc, char* argv[]) {
    int a = 2;
    int b = 4;
    int c = a + b;
    int d = b - a;
    int e = b / a;
    int f = b * a;

    for (int i = 1; i <= 10; i++) {
        for (int j = 1; j <= 10-i; j++) {
            std::cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1);k++){
            std::cout << "*";
        }
            std::cout << "\n";
    }

        // std::cout << "Hello Fahim and " << c << ' ' << d << ' ' << e << ' ' << f << std::endl;
    return 0;
}
