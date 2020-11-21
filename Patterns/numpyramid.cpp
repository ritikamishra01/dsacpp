#include<iostream>
using namespace std;
int main()
{
    int n,j;

   cin>>n;
   for(int i=1;i<=n;i++)
   {
   
        for(j=1;j<=n-i+1;++j)
        { 
             cout<<i;  
        }
    
        cout<<endl;
   }
 
}