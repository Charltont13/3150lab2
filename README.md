# Well-Balanced Lists Generator

This program generates well-balanced lists of integers and calculates the proportion of well-balanced lists to the total number of lists generated.

## Files

### 1. `test.cpp`

`test.cpp` contains unit tests for the `generateWellBalancedLists` function defined in `WellBalancedLists.cpp`. It verifies the correctness of the function by testing it with different input parameters and checking the output against expected results.

### 2. `WellBalancedLists.cpp`

`WellBalancedLists.cpp` implements the `generateWellBalancedLists` function, which generates well-balanced lists according to the specified parameters. It uses random shuffling and prefix sum validation to ensure the generated lists are well-balanced.

### 3. `WellBalancedLists.h`

`WellBalancedLists.h` is the header file for the `WellBalancedLists.cpp` file. It contains function declarations and any necessary includes or typedefs.

## Usage

To compile and run the program, you can use any C++ compiler. For example, you can use `g++`:

```bash
g++ test.cpp WellBalancedLists.cpp -o well_balanced_lists
./well_balanced_lists
