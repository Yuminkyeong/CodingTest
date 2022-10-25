#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int x,n,a,b;
    int rest=0;

    cin>>x>>n;
    for(int i=0; i<n; i++){
        cin>>a>>b;
        rest += a*b;
    }
    if(rest == x)cout<<"Yes";
    else cout<<"No";

}