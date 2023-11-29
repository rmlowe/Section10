#include <iostream>

using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
    
    for (int row = 1; row <= str.length(); ++row) {
        cout << string(str.length() - row, ' ') << str.substr(0, row);
        
        for (int i = row - 2; i >= 0; --i) {
            cout << str[i];
        }
        
        cout << endl;
    }
    
    return 0;
}
