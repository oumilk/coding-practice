#include <iostream>
#include <algorithm>

int main() {
    int num_test;

    std::cin >> num_test;
    int test = 1;
    while (test <= num_test) {
        int num_houses, money;
        std::cin >> num_houses >> money;

        int houses[num_houses];
        for (int k = 0; k < num_houses; k++) {
            std::cin >> houses[k];
        }

        std::sort(houses, houses+num_houses);

        int num_bought = 0;
        int cost = 0;
        for (int k =0; k < num_houses; k++) {
            if (houses[k] + cost > money) {
                break;
            }
            cost += houses[k];
            num_bought++;
        }
        std::cout << "Case #" << test << ": " << num_bought << "\n";
        test++;
    }
}                    

