#include <iostream>

using namespace std;

//소수 문제는 에라토스테네스의 체 또는 나눠서 약수 되는 값이 2개가 되었을 떄
//그 값이 1과 자기 자신인지 확인해 맞다면 rest++ 실행.
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a, b;
    int cnt = 0;
    int rest = 0;
    cin >> a;
    for (int i = 0; i < a; i++) {
        cnt = 0;
        cin >> b;
        if (b == 1)continue;

        for (int j = 1; j <= b; j++) {

            if (b % j == 0) {
                if (j == 1 || j == b) {
                    cnt++;
                    continue;
                }
                else break;
            }

        }
        if (cnt == 2)rest++;
    }
    cout << rest;
}
