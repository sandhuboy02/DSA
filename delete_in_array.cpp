#include<iostream>
using namespace std;
int deleteElement(int a[], int pos, int n){
    int temp=a[pos];
    for(int i=pos;i<=n-2;i++)
    a[i]=a[i+1];
    n--;
  
    return temp;
}
int main(){
    
    int arr[]={10,42,74,65,43};
    int n= sizeof(arr)/ sizeof (arr[0]);
    int pos=3;
   
    cout<<"array is : ";
    for(int i=0 ; i<n; i++){
        cout<<arr[i]<< " ";
    }

    int temp=deleteElement(arr, pos, n);
    cout<<"\nthe deleted element is: "<<temp;

    cout<<"\nnew array is: ";
    for(int i=0 ; i<n-1; i++){
        cout<<arr[i]<< " ";
    }

    
    return 0;
}