Kai Rowlands
Collatz Conjecture

This file contains the program "collatz.cpp". To begin, compile the program with the following command: "g++ collatz.cpp -o collatz". Then, execute the program with the following command: "./collatz".

collatz.cpp finds the integer between 1 and 1000 which takes the most steps to reduce to one. Choose an integer, if it is even divide it by two, if it is odd multiply it by three and add one. Repeat this process until you are left with the number one. The purpose of this program is to find the integer which requires the most amount of steps to achieve this.

Statement of the Collatz Conjecture: Let n be an integer and consider the two operations: (i) If n is even, then divide n by two; (ii) If n is odd, then multiply n by 3 and add 1. Is it possible to transform any positive integer into 1 using these two operations? As simple as this sounds, this is one of the most famous unsolved problems in mathematics. Remarkably, the mathematician who introduced this problem and its namesake, Lothar Collatz, was only twenty-seven years old when he did so.