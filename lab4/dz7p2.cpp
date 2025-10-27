#include <iostream>
#include <cmath>
#include <set>

void obedinenie(std::set<int> A, std::set<int> B) {
    std::set<int> a_b;
    a_b.clear();
    a_b.insert(A.begin(), A.end());
    a_b.insert(B.begin(), B.end());
    std::cout << a_b.size();
}


int main() {

    std::set<int> A;
    std::set<int> B;
    int x;

    std::cout << "Введите элементы множества A:" << std::endl;
    while (std::cin >> x && x != 0) {
        A.insert(x);
    }

    std::cout << "Введите элементы множества B:" << std::endl;
    while (std::cin >> x && x != 0) {
        B.insert(x);
    }

    obedinenie(A, B);

    return 0;
}