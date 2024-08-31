#include <bits/stdc++.h>
using namespace std;

vector<int> spiralprint(vector<vector<int>> v) {
    vector<int> ans;
    int m = v.size();
    int n = v[0].size();
    int total = m * n;
    int startrow = 0;
    int startcol = 0;
    int endcol = n - 1;
    int endrow = m - 1;
    int count = 0;

    while (count < total) {
        // print starting row
        for (int i = startcol; i <= endcol && count < total; i++) {
            ans.push_back(v[startrow][i]);
            count++;
        }
        startrow++;

        // print ending col
        for (int i = startrow; i <= endrow && count < total; i++) {
            ans.push_back(v[i][endcol]);
            count++;
        }
        endcol--;

        // print ending row
        for (int i = endcol; i >= startcol && count < total; i--) {
            ans.push_back(v[endrow][i]);
            count++;
        }
        endrow--;

        // print starting col
        for (int i = endrow; i >= startrow && count < total; i--) {
            ans.push_back(v[i][startcol]);
            count++;
        }
        startcol++;
    }

    return ans;
}

int main() {
    vector<vector<int>> v {
        {1, 2, 3}, {4,5,6}, {7,8,9}
    };

    vector<int> result = spiralprint(v);
    for (auto i : result) {
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
