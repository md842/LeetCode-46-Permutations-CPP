# LeetCode #46: Permutations (Daily Challenge 08/02/2023)
This repository contains a C++ solution to the LeetCode daily challenge #46 for 08/02/2023. https://leetcode.com/problems/permutations/

This solution beats 100.00% of users in runtime (0 ms) and 27.52% of users in memory usage (7.95 MB). 

## Running
Navigate to the directory containing the extracted implementation, then simply run `make` with the included Makefile.
```
cd LeetCode-46-Permutations-CPP
make
```

The exact commands run by `make` are as follows:

```
g++ -Wall -O0 -pipe -fno-plt -fPIC permutations.cpp -o permutations
```

There are no arguments; the test cases are hard-coded into the C++ file.

## Cleaning up
Navigate to the directory containing the extracted implementation, then simply run `make clean` with the included Makefile.

```
cd LeetCode-46-Permutations-CPP
make clean
```

The exact commands run by make clean are as follows:

```
rm -f permutations
```