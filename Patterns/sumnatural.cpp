#include<iostream>
using namespace std;
int natsum(int num)
{
   return (num*(num+1))/2;
}
int main()
{
    int x,n;
    cin>>n;
    x=natsum(n);
    cout<<x;
}