#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    if (num <= 3) {
        return true;
    }
    if (num % 2 == 0 || num % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= num; i += 6) {
        if (num % i == 0 || num % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int nextPrime(int n) {
    if (n <= 1) {
        return 2;
    }
    int next = n + 1;
    while (true) {
        if (isPrime(next)) {
            return next;
        }
        next++;
    }
}

int main() {
    int n;
    cin >> n;
    int result = nextPrime(n);
    cout << result << endl;
    return 0;
}
