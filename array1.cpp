#include<bits/stdc++.h>
using namespace std;
vector<int> rotatearray(vector<int> &arr ,int n){
    int temp=arr[0];
    for(int i=1;i<n;i++){
        arr[i-1]=arr[i];
    }
    arr[n-1]=temp;
    return arr;
}
int main(){
    int n;
    cin>> n;
    vector<int> arr;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }
    rotatearray(arr,n);
    for(int i=0;i<n;i++){
        cout<< arr[i]<< " ";
    }
    return 0;

}
