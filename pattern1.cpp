//for the outer loop count no.of lines
//for the inner loop focus on columns and connedt them somehow to rows
//print them inside the inner loop
//observ symmetry (optional)

#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"* ";
        }
        cout<<endl;

    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
}
