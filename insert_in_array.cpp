// #include <iostream>
// using namespace std;
// void insert(int arr[], int pos, int ele, int n){
//    for(int i=n-1;i>=pos;i--){
//        arr[i+1]=arr[i];
//        arr[pos]=ele;
//    }
// }

// int main(){
//     int arr[]={10,47,45,8,7}; 
//     int n= sizeof (arr) /sizeof (arr[0]);
//     int pos=2;
//     int ele=52;
//     cout << "The new array is: ";
//     insert(arr,pos,ele,n);
//     n++;

//    for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;


// }


#include <iostream>
using namespace std;
void insert(int arr[],int n, int pos, int ele){
    for(int i=n-1;i<pos;i--){
        arr[i+1]=arr[i];
        arr[pos]=ele;

    }
}
int main(){
    int arr[]={10,45,78,95,43,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int pos=3;
    int ele=34;
    cout<<"the new array is: ";
    insert(arr,pos,ele,n);
    n++;

    for(int i=0; i<n; i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}

