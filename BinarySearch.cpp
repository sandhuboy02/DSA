#include<iostream>  
using namespace std;
int binarysearch(int arr[],int l,int h,int x){
    while(l<=h){
       int m=l+(h-1)/2;
        if(arr[m]==x){
            return m;
        }
        else if(x<arr[m]){
            h=m-1;

        }
        else
        l=m+1;
  }
  return -1;
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x=10;
   int result= binarysearch(arr,0,n,x);
    if (result==-1){
        cout<<"not found";
    }
    else
    cout<<"found"<<endl;
}