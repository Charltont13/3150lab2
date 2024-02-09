#include <iostream>
#include <vector>
#include <cstdlib> 
#include <ctime> 

int generateWellBalancedLists(int n, int iterations) {
    
    std::srand(std::time(nullptr));
    
    int balancedCount = 0;
    
    for (int i = 0; i < iterations; ++i) {

        std::vector<int> symbols(2 * n, 0);
        for (int j = 0; j < n; ++j) {
            symbols[j] = 1; // Fill first n elements with 1
            symbols[j + n] = -1; // Fill next n elements with -1
        }
        
        
        for (int j = 2 * n - 1; j > 0; --j)
        {
            int randIndex = std::rand() % (j + 1);
            std::swap(symbols[j], symbols[randIndex]);
        }
        
        bool isValid = true;

        int prefixSum = 0;
        for (int j = 0; j < 2 * n; ++j)
        {
            prefixSum += symbols[j];
            if (prefixSum < 0) {
                isValid = false;
                break;
            }
        }
        
        if (isValid)
        {
            ++balancedCount;
        }
    }
    
    return balancedCount;
}

int main() {
    
    int n = 2; 
    int iterations = 10000; 
    
    int wellBalancedCount = generateWellBalancedLists(n, iterations);
    std::cout << "Total runs: " << iterations << std::endl;

    std::cout << "Well-balanced lists: " << wellBalancedCount << std::endl;
    std::cout << "Proportion of well-balanced lists: " << static_cast<double>(wellBalancedCount) / iterations << std::endl;
    
    return 0;
}
