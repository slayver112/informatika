#include "pch.h"
#include "Header.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

#ifndef M_PI
#endif

double num_even_vals_in_arr(const int* arr, int size) {
    clock_t start_time = clock(); // Запуск таймера
    int count = 0;
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            ++count;
        }
    }
    clock_t end_time = clock(); // Завершение таймера
    double time_taken = double(end_time - start_time) / CLOCKS_PER_SEC; // Вычисление времени выполнения в секундах

    return time_taken;
}