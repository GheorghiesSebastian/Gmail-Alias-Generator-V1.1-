#include <iostream>
using std::cout;
using std::cin;
using std::string;

int l = 0;
int x = 0;
int count = 0;

string GMAIL;

int main() {
    cout << "gmail = ";
    cin >> GMAIL;
    cout << "insert number of aliases : ";
    cin >> count;
    x = GMAIL.find("@");
    string ZETA = GMAIL.substr(0, x);
    for (int i = 0; i <= count; ++i) {
         cout << "[" << i << "]" << ZETA << i << "@gmail.com" << "\n";
        
    }
    return 0;
}
