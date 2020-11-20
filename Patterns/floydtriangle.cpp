#include<iostream>
using namespace std;
int main()
{
    int n,i,j;
    cout<<"enter the no. of lines :";
    cin>>n;
    int x=1;
    cout<<endl;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++)
        {
            cout<<x<<" ";
            x++;
        }
        cout<<endl;
    }
    return 0;

}