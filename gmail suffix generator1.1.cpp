#include <iostream>
#include <vector>


using std::cout;
using std::cin;
using std::string;
using std::size;
using std::vector;

int p = 0;
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
    string ALPHA = ".";
    string BETA = ".";
    for (int i = 0; i <= count; ++i)
    {
        if (ZETA.size() < i)
        {
            ALPHA.append(BETA);
            for (int z = 0; z <= ZETA.size(); ++z)
            {
                if (z + ZETA.size() * p + i == count)
                {
                    return 0;
                }
                string a = ZETA.substr(0, z);
                string b = ZETA.substr(z, (ZETA.size() - a.size()));
                cout << "[" << z + ZETA.size() * p + i << "]" << a << ALPHA << b << "@gmail.com" << "\n";
                if (z == ZETA.size())
                {
                    p = p + 1;
                }
            }
        }
        else
        {
            string a = ZETA.substr(0, i);
            string b = ZETA.substr(i, (ZETA.size() - a.size()));
            cout << "[" << i << "]" << a << "." << b << "@gmail.com" << "\n";
        }
    }
    return 0;
}
