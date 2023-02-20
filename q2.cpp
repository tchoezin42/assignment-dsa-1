#include <iostream>
#include <string>
using namespace std;

int remove_adjacent_duplicates(string &str, int i, int j) {
    if (j == str.length()) {
        return i;
    } else if (i > 0 && str[j] == str[i-1]) {
        return remove_adjacent_duplicates(str, i-1, j+1);
    } else {
        str[i] = str[j];
        return remove_adjacent_duplicates(str, i+1, j+1);
    }
}

int main() {
	string str;
	cout<<"enter a string :";
    cin>>str;
    int len = remove_adjacent_duplicates(str, 0, 0);
    for (int i = 0; i < len; i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
