#include <bits/stdc++.h>
//0(sqrt(n))
using namespace std;
void printdiv(int n){
    vector<int> ls;
    for(int i =0;i<=sqrt(n);i++){//i*i<=n as condition
    if(n%i==0){
    ls.push_back(i);
        if ((n/i)!=i){
            ls.push_back(n/i);
        }
    }
    }
    sort(ls.begin(),ls.end());
    for(auto it: ls) cout<< it<< " ";
}
int main(){
    int n;
    cin >> n;
    printdiv(n);
}
