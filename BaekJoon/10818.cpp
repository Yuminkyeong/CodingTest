#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int a,tmp;
    int min,max;
    
    cin>>a;
    for(int i=0; i<a; i++){
        cin>>tmp;
         if(i==0){
            min=tmp;
            max=tmp;
        }
        if(min>tmp)min=tmp;
        if(max<tmp)max=tmp;
    }
   
    cout<<min<<" "<<max;
}