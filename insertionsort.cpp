#include <iostream>
using namespace std;
void insertion(int A[], int n){
    int i,j,temp;
    for(i=1; i<n; i++){
        temp=A[i];
        j=i-1;
        while((j>=0) && A[j]>temp)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=temp;

    }

}
int main(){
    int A[]={5,7,1,6,8},n=5,i;
    insertion(A,n);
    for(i=0; i<5; i++)
    cout<<A[i]<<" ";
}