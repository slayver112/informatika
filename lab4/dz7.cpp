#include <iostream>
#include <cmath>

void massivB(int* A, int* B, int size, int* new_size) {
    *new_size = 0;
    for (int i = 0; i < size; i++) {
        if (pow(A[i], 2) < 1000) {
            B[*new_size] = A[i];
            (*new_size)++;
            }
    }
}


int main() {

    int* A = new int[10]; 
    int* B = new int[10];
    int new_size;

    // Ввод массивов
    std::cout << "Введите 10 элементов для массива A:" << std::endl;
    for (int i = 0; i < 10; i++) {
        std::cin >> A[i];
    }

    massivB(A, B, 10,&new_size);

    for (int i = 0; i < new_size; i++) {
        std::cout << B[i] << " ";
    }
    std::cout << std::endl;

    delete[] A;
    delete[] B;

    return 0;
}