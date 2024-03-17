#include <iostream>
#include <vector>

using namespace std;

bool is_in_fibonacci(int num) {
    if (num < 0) return false;
    if (num <= 1) return true;

    int prev = 0, curr = 1;
    while (curr < num) {
        int temp = curr;
        curr += prev;
        prev = temp;
    }
    return curr == num;
}

int main() {
    int num;
    cout << "Digite um número: ";
    cin >> num;

    if (is_in_fibonacci(num)) {
        cout << "O número " << num << " pertence à sequência de Fibonacci.\n";
    } else {
        cout << "O número " << num << " não pertence à sequência de Fibonacci.\n";
    }

    return 0;
}
