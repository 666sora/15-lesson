#include <iostream>
#include <vector>

int main() {
    int n;
    std::cout << "Input vector size: ";
    std::cin >> n;
    std::vector<int> vec(n);
    for (int i = 0; i < vec.size(); i++) {
        std::cout << "Input number: ";
        std::cin >> vec[i];
    }
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size() - i - 1; j++) {
            if (abs(vec[j]) > abs(vec[j + 1])) {
                std::swap(vec[j], vec[j + 1]);
            }
        }
    }
    for (int i = 0; i < vec.size(); i++) {
        std::cout << vec[i] << " ";
    }
}

/*
Вам даётся массив целых чисел, отсортированных по возрастанию.
Необходимо вывести его на экран отсортированным в порядке возрастания модуля чисел
*/