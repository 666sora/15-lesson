#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n = 0;
    bool sort = false;
    while (n != -2) {
        do {
            std::cout << "Input number: ";
            std::cin >> n;
            if (vec.size() == 5 && !sort) {
                for (int i = 0; i < vec.size(); i++) {
                    for (int j = 0; j < vec.size() - i - 1; j++) {
                        if (vec[j] > vec[j + 1]) {
                            std::swap(vec[j], vec[j + 1]);
                        }
                    }
                }
                sort = true;
            }
            if (n != -1 && n != -2) {
                if (vec.size() >= 5 && vec[4] > n) {
                    vec.push_back(n);
                    for (int i = vec.size() - 1; i > 0; i--) {
                        if (vec[i] < vec[i - 1]) {
                            std::swap(vec[i], vec[i - 1]);
                        }
                    }
                    vec.pop_back();
                }
                else if (vec.size() < 5) vec.push_back(n);
            }
        } while (n != -1 && n != -2);
        if (n == -1) {
            std::cout << "Fifth number is " << vec[4] << std::endl;
        }
    }
}

/*
С клавиатуры вводятся числа. Когда пользователь вводит
-1 -- необходимо выводить на экран пятое по возрастанию
число среди введённых. Когда пользователь вводит -2 -- программа завершает работу.
*/