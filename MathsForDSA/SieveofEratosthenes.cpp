// Problem:
// Given an integer n, return the number of prime numbers that are strictly less than n.

// Input: n = 10
// Output: 4
// Explanation: There are 4 prime numbers less than 10, they are 2, 3, 5, 7.

//Difficulty: Medium

class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n + 1, true);

        prime[0] = prime[1] = false;

        int count = 0;
        for (int i = 2; i < n; ++i) {
            if (prime[i]) {
                count++;

                for (int j = 2 * i; j < n; j += i)
                    prime[j] = 0;
            }
        }
        return count;
    }
};

// Problem Link: https://leetcode.com/problems/count-primes/description/