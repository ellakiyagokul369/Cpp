#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int n=s.length();
    if(n%2==0){
        cout<<"not accepted";
        return 0;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i==j){
                cout<< s[i];
            }
            else if(j==n-1-i){
                cout<< s[n-i-1];
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
