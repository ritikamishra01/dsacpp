#include<iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"enter the no. of rows:\n";
    cin>>row;
    cout<<"enter the no. of columns:\n";
    cin>>col; 
    for(int i=1;i<=row;i++){ 
      for(int j=1;j<=col;j++){
        if(i==1 || i==row || j==1 || j==col)
        {
          cout<<"*";
        }
       else
        {
            cout<<" ";
        }
      }
        cout<<endl;
    }  
    return 0;
}