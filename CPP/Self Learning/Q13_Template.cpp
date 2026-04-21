#include <iostream>
#include <string>

template <typename T>
void universalSwap(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    universalSwap(x, y);
    std::cout << "Swapped Ints: " << x << ", " << y << std::endl;

    std::string s1 = "World", s2 = "Hello";
    universalSwap(s1, s2);
    std::cout << "Swapped Strings: " << s1 << " " << s2 << std::endl;

    return 0;
}