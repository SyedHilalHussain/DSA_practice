#include <iostream>
#include <iomanip>
using namespace std;


int binarysearch(int arr[],int left, int right, int find){
while(left<=right){
   int  mid=left+ (right-left)/2;
   if(arr[mid]==find){
    
    int res = 0;
    for (int i=0; i<10; i++){
        if (find == arr[i]){
          res++;
        }}
    return res;
   }
   else if(arr[mid]<find){
     left=mid+1;
   }else{
   right=mid-1;
   }

}
return -1;
}

int main()
{
int arr[10]={2,5,5,5,6,6,8,9,9,9};
int find;
int output;


cout<<"enter the num which you want to find"<<endl;
cin>>find;

// for(int j=0; j<10; j++ ){
//     cout<<arr[j]<<endl;
// }

output=binarysearch(arr,0,9,find);
if(output==-1){
    cout<<"no result match";
}
else{
    cout<<"Element "<<find<<" occurs "<<output<<" times"<<endl;
}

return 0;
}
