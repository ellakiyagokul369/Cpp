#include<bits/stdc++.h>
using namespace std;
void dosomething1(string s){//use copy of the string
    s[0]='t';
    cout<<s<<endl;
}
void dosomething2(string &s){
    s[0]='t';
    cout<<s<<endl;
}
int main(){
    string s="raj";
    dosomething1(s);//parse by value
    cout<<s<<endl;
    dosomething2(s);//parse By Reference
    cout<<s<<endl;
    return 0;
}
