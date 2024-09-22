#include <iostream>
#include <queue>
#include <stack>

using namespace std;

void Print(queue<int>& q) {

    while (!q.empty()) {
        cout << q.front() << ' ';
        q.pop();
    }
    cout << "\n";
}

void reverseQueue(queue<int>& q) {
    
    stack<int> stk;

    while (!q.empty()) {
        stk.push(q.front());
        q.pop();
    }
    while (!stk.empty()) {
        q.push(stk.top());
        stk.pop();
    }
}

int main() { 

    int t;
    cin >> t;
    int nums[t];

    for (int i = 0; i < t; i++)
        cin >> nums[i];
        
    for (int i = 0; i < t; i++) {
        queue<int> q;
        for (int j = nums[i]; j > 0; j--) {
            q.push(j);
            for (int k = 0; k < j; k++) {
                int el = q.front();
                q.pop();
                q.push(el);
            }

        }
        reverseQueue(q);
        Print(q);
    }
    

    return 0;
}