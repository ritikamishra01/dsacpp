#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key)
{   
    int s=0;
    int e=n;    
while(s<=e){ 
    int mid=(s+e)/2;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[mid]==key)
                return mid;
            else if(arr[mid]>key)
               e=mid-1;
            else 
              s=mid+1;
        }
    }
}
   
}

int main(){
    int n,key;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }    
    cin>>key;
    cout<<binarysearch(arr,n,key)<<endl;
}