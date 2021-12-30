#include <bits/stdc++.h>

int main() {
    // Boilerplate
    std::ios_base::sync_with_stdio(0);
    std::cin.tie(NULL);
    std::cout.tie(NULL);
    // Boilerplate over

    int size_of_array{};

    std::cin >> size_of_array;

    int* arr{ new int[size_of_array]{} };
    
    std::cout << arr;
    std::cout << ++arr;

    for(int i = 0; i < size_of_array; ++i) {
        std::cin >> arr[i];
    }

    int num_of_pos{};
    int num_of_neg{};
    int num_of_zero{};

    for (int i = 0; i < size_of_array; ++i) {
        if (arr[i] > 0) {
            ++num_of_pos; 
        } 
        else if (arr[i] < 0) {
            ++num_of_neg;
        }
        else {
            ++num_of_zero;
        }
    }

    float pos_ratio{ (static_cast<float>(num_of_pos))/size_of_array };
    float neg_ratio{ (static_cast<float>(num_of_neg))/size_of_array };
    float zero_ratio{ (static_cast<float>(num_of_zero))/size_of_array };

    std::cout << std::fixed;
    std::cout << std::setprecision(6);
    std::cout << pos_ratio << "\n";
    std::cout << neg_ratio << "\n";
    std::cout << zero_ratio << "\n";

    delete[] arr;
}