#include<iostream>
using namespace std;
int arr(int array[], int key,int n){
    
    for(int i=0;i<n;i++){
        if(array[i]==key){
            return i;
        
    }
}
}
int main(){
    int array[]={10,20,30,40,50};
    int n= sizeof(array)/sizeof(array[0]);
    int key=40;
    int position =arr(array,key,n);

    if(position==-1){
        cout<<"element not found";

    }
    else
    cout<<"key is returned";
    
return 0;

}