#include <iostream>
using namespace std;
int a, t = 0;
string c, b[101];
int main() {
    cin >> a;
    for (int i = 0; i < a; i++) {
        cin >> c;
        if (c[0] == 'O' && c[1] == 'O' && t == 0) {
            c[0] = '+';
            c[1] = '+';
            t = 1;
        } else if (c[3] == 'O' && c[4] == 'O'&& t == 0) {
            c[3] = '+';
            c[4] = '+';
            t = 1;
        }
        b[i] = c;
    }
    if (t == 1) {
        cout << "YES" << endl;
        for (int i = 0; i < a; i++) {
            cout << b[i] << endl;
        }
    } else {
        cout << "NO";
    }
}
