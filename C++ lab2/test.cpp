#include <cassert>
#include "WellBalancedLists.cpp" 
#include <iostream>


void testGenerateWellBalancedLists() {

    int n1 = 2;
    int iterations1 = 10000;
    int wellBalancedCount1 = generateWellBalancedLists(n1, iterations1);
    assert(wellBalancedCount1 >= 0); 
    assert(wellBalancedCount1 <= iterations1); 

    int n2 = 5;
    int iterations2 = 50000;
    int wellBalancedCount2 = generateWellBalancedLists(n2, iterations2);
    assert(wellBalancedCount2 >= 0); 
    assert(wellBalancedCount2 <= iterations2); 
    
    std::cout << "tests passed!" << std::endl;
}

int main() {

    testGenerateWellBalancedLists();
    
    return 0;
}
