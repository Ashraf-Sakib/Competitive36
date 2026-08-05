#include <bits/stdc++.h>
using namespace std;
 
#define LIMIT 1000000
long long i, j;
long long prime_flag[LIMIT];
 
void calculate_prime_flag() {
    prime_flag[0] = prime_flag[1] = 1;
    for (i = 2; i < LIMIT; i++) {
        if (prime_flag[i] == 0) {
            for (j = i * i; j < LIMIT; j += i) {
                prime_flag[j] = 1;
            }
        }
    }
}
 
bool check_perfect_square(long long n) {
    double sqrt_n = sqrt(n);
    return sqrt_n == int(sqrt_n);
}
 
bool is_t_prime(long long n) {
    if (n == 4) {
        return true;
    } else if (n < 4 || n % 2 == 0) {
        return false;
    } else if (check_perfect_square(n) && prime_flag[int(sqrt(n))] == 0) {
        return true;
    }
    return false;
}
 
int main() {
    calculate_prime_flag();
    long long total_numbers, n;
    cin >> total_numbers;
    
    for (i = 0; i < total_numbers; i++) {
        cin >> n;
        if (is_t_prime(n)) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
 
    return 0;
}