#include <deque>
#include <string>
#include <iostream>
using namespace std;

int main() {
    deque<int> dq;
    string command;
    
    while (cin >> command) {
        if (command == "+") {
            int num;
            cin >> num;
            dq.push_front(num);
        } else if (command == "-") {
            int num;
            cin >> num;
            dq.push_back(num);
        } else if (command == "*") {
            if (dq.empty()) {
                cout << "error" << endl;
            } else {
                int sum = dq.front() + dq.back();
                cout << sum << endl;
                dq.pop_front();
                if (!dq.empty()) {
                    dq.pop_back();
                }
            }
        } else if (command == "!") {
            break;
        }
    }
    
    return 0;
}