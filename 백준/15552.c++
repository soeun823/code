#include <iostream>
int main(){
    using namespace std;

    int t,a,b,num[1000000];

    cin >> t;
    for(int i=0;i<t;i++){
        cin >> a >> b;
        num[i] = a+b;
    }

    for(int i=0;i<t;i++){
        cout << num[i] << '\n';
    }

    return 0;
}
