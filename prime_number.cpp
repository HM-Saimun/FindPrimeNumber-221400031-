#include <iostream>

using namespace std;

int main() {
    cout << "Prime numbers from 1 to 100 are: ";

    for (int num = 2; num <= 100; num++) {
        bool isPrime = true; // Assume the number is prime

        for (int i = 2; i * i <= num; i++) { // Check divisibility up to sqrt(num)
            if (num % i == 0) {
                isPrime = false; // Not a prime number
                break; // Exit the loop early
            }
        }

        if (isPrime) {
            cout << num << " "; // Print the prime number
        }
    }

    cout << endl;
    return 0;
}
