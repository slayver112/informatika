import time
import matplotlib.pyplot as plt
import random

def remove_from_list(spisok, index):
    if index < 0 or index >= len(spisok):
        return spisok.copy() 
    result = spisok.copy()
    result.pop(index)
    return result

ns = [10, 100, 1000, 10000, 100000, 1000000, 5000000, 10000000, 15000000, 20000000]
remove_from_list_l = []

for n in ns:
    my_list = list(range(n))
    index = random.randint(0,n-1)
    start = time.perf_counter()
    remove_from_list(my_list, index)
    remove_from_list_l.append(time.perf_counter() - start)

plt.figure(figsize=(10, 6))
plt.plot(ns, remove_from_list_l, marker='o', label='Удаление из списка')

plt.xlabel('Размер списка (n)', fontsize=12)
plt.ylabel('Время работы (секунды)', fontsize=12)
plt.title('Время удаления элемента из списка', fontsize=14)
plt.legend()
plt.grid(True)
plt.xscale('log')
plt.yscale('log')
plt.tight_layout()
plt.show()