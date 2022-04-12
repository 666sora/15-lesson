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
    int sum = 0;
    int findI, findJ;
    for (int i = vec.size() - 1; i >= 0; i--) {
        for (int j = 0; j <= i; j++) {
            int tempSum = 0;
            for (int k = j; k <= i; k++) {
                tempSum += vec[k];
            }
            if (tempSum > sum) {
                sum = tempSum;
                findI = j;
                findJ = i;
            }
        }            
    }
    std::cout << "i: " << findI << std::endl << "j: " << findJ;
}

/*
Вам даётся массив целых чисел. Необходимо найти такие 
два индекса i и j в этом массиве, что сумма a[i], a[i+1], a[i+2], … a[j] 
будет максимально возможной и вывести их.
*/