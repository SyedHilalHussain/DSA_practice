#include <iostream>
#include <iomanip>
using namespace std;
void bubblesort(int arr[],int n){
    for (int k = 0; k<=n-1; k++)
    {
       for (int j = 0; j <n-k-1; j++)
       {
        if (arr[j]>arr[j+1])
        {
            int temp;
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }

        
       }
       
    }
   
}
int main()
{
    int arr[10]={4,1,3,9,7};
    int n=5;
    bubblesort(arr,n);
    for ( int i = 0; i <n; ++i)
    {
        cout<<arr[i];
    }
    
    
return 0;
}
