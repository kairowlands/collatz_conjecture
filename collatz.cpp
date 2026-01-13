// Kai Rowlands
// Collatz Conjecture

#include <iostream>

using namespace std;

int main(){
    int StepsToOne = 0; // StepsToOne = amount of steps to reduce each integer to one
    int MaxNumber = 1;  // MaxNumber = integer which requires most amount of steps to reduce to one

    for (int MaxInteger = 1; MaxInteger < 1000; MaxInteger++){
        int n = MaxInteger;                                     // n is now the input for the while loop below, assigns the value of MaxInteger to n
        int steps = 0;                                          // steps = number of steps

        while (n != 1){
            if (n % 2 == 1){    // If n is "completely" divisible by two then the result is one
                n = 3 * n + 1;
            }
            else{
                n /= 2; // If n is even then divide by two, equivalent to n = n / 2
            }
            steps++;    // Tells the loop to repeat until the integer is reduced to one
        }
        if (StepsToOne < steps){
            StepsToOne = steps;     // Stores the largest value (which corresponds to the most amount of steps) (steps) and assigns its value to StepsToOne
            MaxNumber = MaxInteger; // Stores the integer which corresponds to the most amount of steps (MaxInteger) and assigns its value to MaxNumber
        }
    }
    cout << "The positive integer which requires the most amount of steps to reduce to one is: " << MaxNumber << endl;
    cout << "Amount of steps taken: " << StepsToOne << endl;

    return 0;
}
