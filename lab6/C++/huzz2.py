import time
import math

def num_even_vals_in_arr(arr):
    start_time = time.time()  # Запуск таймера

    
    count = 0
    for num in arr:
        if num % 2 == 0:
            count += 1

    end_time = time.time()  # Завершение таймера
    time_taken = end_time - start_time  # Вычисление времени выполнения в секундах

    return time_taken

massiv = [i for i in range(1,10000001)]
print(round(num_even_vals_in_arr(massiv),2))