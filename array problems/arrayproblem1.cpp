#include<iostream>
using namespace std;
int main(){

    int n;
    int mx=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        mx=max(mx,arr[i]);
        cout<<mx<<endl;
    }
    return 0;
}