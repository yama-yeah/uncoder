#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, q;
    cin >> n >> q;
    vector<vector<int>> qs(q, vector<int>(3));
    for (int i = 0; i < q; i++) {
        cin >> qs[i][0] >> qs[i][1] >> qs[i][2];
    }
    vector<vector<int>> box(n, vector<int>());
    for (auto qu : qs) {
        if (qu[0] == 1) {
            box[qu[2]-1].push_back(qu[1]);
        } else if (qu[0] == 2) {
            sort(box[qu[1]-1].begin(), box[qu[1]-1].end());
            for (auto b : box[qu[1]-1]) {
                cout << b << " ";
            }
            cout << endl;
        } else {
            bool found = false;
            for (int j = 0; j < n; j++) {
                if (find(box[j].begin(), box[j].end(), qu[1]) != box[j].end()) {
                    cout << j+1 << " ";
                    found = true;
                }
            }
            if (!found) {
                cout << endl;
            }
        }
    }
    return 0;
}
