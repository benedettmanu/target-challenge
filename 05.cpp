#include <iostream>
#include <string>

using namespace std;

string invert_string(string str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap(str[i], str[n - i - 1]);
    }
    return str;
}

int main() {
    string str;
    cout << "Digite uma string: ";
    getline(cin, str);

    string inverted_str = invert_string(str);
    cout << "A string invertida é: " << inverted_str << "\n";

    return 0;
}
