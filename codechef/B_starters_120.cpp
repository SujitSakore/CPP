//  Sub or Swp

#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){
    while(b!=0){
        int temp =b;
        b=a%b;
        a=temp;
    }
    return a;
}
int main(){
    int sujit;
    cin>>sujit;
    while(sujit--){
        int x,y;
        cin>>x>>y;
        cout<<gcd(x,y)<<endl;
    }
    return 0;
}


