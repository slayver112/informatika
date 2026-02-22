#include <iostream>
#include <list>
#include <chrono>

std::list<int> RemoveFromList(std::list<int> spisok, int index) {
    if (index < 0 || index >= spisok.size()) {
        return spisok;
    }

    std::list<int>::iterator element = spisok.begin();

    for (int i = 0; i < index; i++) {
        ++element;
    }

    spisok.erase(element);
    return spisok;
}

template <typename Func, typename... Args>
auto measure_execution_time(Func&& func, Args&&... args) {
    auto start_time = std::chrono::high_resolution_clock::now();  // Начинаем отсчет времени
    auto result = func(std::forward<Args>(args)...);  // Выполняем переданную функцию с аргументами
    auto end_time = std::chrono::high_resolution_clock::now();  // Останавливаем отсчет времени

    auto duration = std::chrono::duration_cast<std::chrono::milliseconds>(end_time - start_time);  // Вычисляем продолжительность в миллисекундах
    return std::make_pair(result, duration.count());  // Возвращаем результат и время выполнения
}


int main() {
    std::list<int> myList;
    for (int i = 0; i < 10000; i++) {
        myList.push_back(i);
    }

    auto [result, execution_time] = measure_execution_time(RemoveFromList, myList, 2);

    std::cout << "Результат: " << result.size() << std::endl;

    std::cout << "Время выполнения: " << execution_time << " мс" << std::endl;

    return 0;
}
