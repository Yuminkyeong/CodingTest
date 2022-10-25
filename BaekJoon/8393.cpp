#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    int sum=0;
    cin>>n;
    for(int i=1; i<=n; i++)sum+=i;
    cout<<sum;
}