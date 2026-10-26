#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
    string s;
    queue<char> q;
    int freq[256] = {0};

    cout << "Enter character stream: ";
    cin >> s;

    for (char ch : s) {
        freq[(unsigned char)ch]++;
        q.push(ch);

        while (!q.empty() &&
               freq[(unsigned char)q.front()] > 1) {
            q.pop();
        }

        if (q.empty())
            cout << "-1 ";
        else
            cout << q.front() << " ";
    }

    return 0;
}
