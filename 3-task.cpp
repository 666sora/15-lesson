#include <iostream>
#include <vector>

int main() {
    std::vector<int> vec;
    int n = 0;
    while (n != -2) {
        do {
            std::cout << "Input number: ";
            std::cin >> n;
            if (n != -1 && n != -2) vec.push_back(n);
        } while (n != -1 && n != -2);
        if (n == -1) {
            bool find = false;
            for (int i = 0; i < vec.size() && !find; i++) {
                for (int j = 0; j < vec.size() - i - 1; j++) {
                    if (vec[j] > vec[j + 1]) {
                        int temp = vec[j];
                        vec[j] = vec[j + 1];
                        vec[j + 1] = temp;
                    }
                }
                if (i == 5) {
                    std::cout << "Fifth number is " << vec[i - 1] << std::endl;
                    find = true;
                }
            }
        }
    }
}

/*
С клавиатуры вводятся числа. Когда пользователь вводит
-1 -- необходимо выводить на экран пятое по возрастанию
число среди введённых. Когда пользователь вводит -2 -- программа завершает работу.
*/