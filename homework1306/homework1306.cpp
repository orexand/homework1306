#include <iostream>
#include <queue>
#include <algorithm>

using namespace std;

void sortQueue(queue<int>& q) {
    int n = q.size();
    vector<int> v(n);

    for (int i = 0; i < n; i++) {
        v[i] = q.front();
        q.pop();
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++) {
        q.push(v[i]);
    }
}

int main() {
    queue<int> q;
    for (int i = 0; i < 10; i++) {
        q.push(rand() % 100);
    }

    sortQueue(q);

    while (!q.empty()) {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}
