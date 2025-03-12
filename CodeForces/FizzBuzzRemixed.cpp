#include <iostream>

using namespace std;

// Function to count numbers from 0 to n where i mod 3 = i mod 5
long long countFizzBuzz(long long n) {
    // Special case for n = 0
    if (n == 0) return 1;
    
    // Count how many complete groups of 15 numbers we have
    long long complete_groups = n / 15;
    
    // For each complete group of 15 numbers, we have exactly 3 numbers
    // that satisfy the condition: 0, 1, 2, 15, 16, 17, 30, 31, 32, ...
    long long result = complete_groups * 3;
    
    // Handle the remaining numbers (n mod 15)
    long long remainder = n % 15;
    
    // Check how many numbers satisfy our condition in the last incomplete group
    if (remainder >= 0) result++; // 0 always satisfies
    if (remainder >= 1) result++; // 1 always satisfies
    if (remainder >= 2) result++; // 2 always satisfies
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        long long n;
        cin >> n;
        cout << countFizzBuzz(n) << endl;
    }
    
    return 0;
}