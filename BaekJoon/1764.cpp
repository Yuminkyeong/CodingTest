#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

//map 사용. 이분 탐색으로 다음에 풀어보기. 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    map<string, int> mp;
    vector<string> v;

    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n + m; i++) {
        string str;
        cin >> str;
        mp[str]++;
        if (mp[str] > 1)
            v.push_back(str);
    }
    sort(v.begin(), v.end());
    cout << v.size() << '\n';
    for (auto o : v)
        cout << o << '\n';
}