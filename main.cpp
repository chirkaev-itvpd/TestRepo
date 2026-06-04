 Начальный файл
#include <iostream>
#include <cmath>
int main() {
    double arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = sin(i);
    }
    for (int i = 0; i < 10; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}