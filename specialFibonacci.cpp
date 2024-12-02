#include <iostream>
using namespace std;

// Function to calculate F(n) recursively with modulo 47
int F(int n) {
    // Base cases
    if (n == 0 || n == 1) return 1;

    // Recursive case with modulo 47
    return (F(n - 1) * F(n - 1) + F(n - 2) * F(n - 2)) % 47;
}

int main() {
    int n = 18; // Input value for n

    // Print the result for F(n)
    cout << "F(" << n << ") = " << F(n) << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Helper function to calculate F(n) recursively with modulo 47
int calculateF(int n) {
    // Base cases
    if (n == 0 || n == 1) return 1;

    // Recursive case with modulo 47
    int previous = calculateF(n - 1);
    int beforePrevious = calculateF(n - 2);
    return (previous * previous + beforePrevious * beforePrevious) % 47;
}

int main() {
    int n = 5; // Input value for n

    // Print the result for F(n)
    cout << "F(" << n << ") = " << calculateF(n) << endl;

    return 0;
}

