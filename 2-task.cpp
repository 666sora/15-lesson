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
    int result;
    std::cout << "Input result number: ";
    std::cin >> result;
    int findI, findJ;
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec.size(); j++) {
            if (vec[i] + vec[j] == result && i != j) {
                findJ = vec[i];
                findI = vec[j];
            }
        }
    }
    std::cout << findI << " + " << findJ << " = " << result;
}
/*
Вам даётся массив целых чисел и одно число -- результат. 
Необходимо найти в массиве 2 числа, сумма которых будет давать 
результат, и вывести их на экран. Гарантируется, что только одна 
пара чисел в массиве даёт в сумме результат.
*/