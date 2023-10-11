#include <iostream>
using namespace std;
void traverse (int A[5], int n)
{
    for(int i=0 ; i<n ; i++)
    {
        cout<<A[i];

    }
    cout<<endl;
    return;
}
int *insertion(int A[5], int &n, int k,int item)
{
    int j =n-1;
    while(j>=k)
     {
        A[j+1]=A[j];
        j=j-1;

     }
     A[k]=item;
     n=n+1;
     return A;

}
int *deletion(int A[5],int &n, int k)
{
    int j = k;
    while(j<n-1)
    {
        A[j]=A[j+1];
        j = j+1;
    }
    n=n-1;
    return A;
}
int main(){
    int A[5]={2,4.5,6,8};
    int n = 4;
    traverse(A, n);
    int k =0;
    int item=10;
    insertion(A,n,k,item);
    traverse(A, n);
    deletion(A, n, k);
    traverse(A, n);
}