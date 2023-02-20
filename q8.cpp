#include <iostream>
using namespace std;

int josephus(int n, int m) {
    int res = 0;
    for (int i = 2; i <= n; i++)
        res = (res + m) % i;
    return res + 1;
}

int main() {
    int n, m;
    cout << "Enter the number of people: ";
    cin >> n;
    cout << "Enter the step size (m): ";
    cin >> m;
    cout << "The position of the last person standing is: " << josephus(n, m) << endl;
    return 0;
}
