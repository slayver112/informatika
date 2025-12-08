#pragma once

#ifdef MYLIBRARY_EXPORTS
#define MYLIBRARY_API __declspec(dllexport)  // Для компиляции библиотеки
#else
#define MYLIBRARY_API __declspec(dllimport) // Для использования библиотеки
#endif

extern "C" {
    MYLIBRARY_API double num_even_vals_in_arr(const int arr[], int size);   // Функция для сложения целых чисел
}