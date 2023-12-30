#include<iostream>
using namespace std;
int arr[]={1,2,3,4,5,6,7,8,9,10};
 int maxsize=10;
 void arr_deletion(int index){

    if(index<0){
        cout<<"Invalid Index:Underflow!!!!"<<endl;
        return;
    }

    if(index>maxsize-1){
         cout<<"Invalid Index:Overflow!!!!"<<endl;
        return;
    }

  //  if(index>0 && index<maxsize-1) //this statement not needed here
    {

        for(int k=index-1;k<maxsize;k++){
            arr[k]=arr[k+1];
        }
    }

    maxsize--;
 }
 int main(){
    int n;
    printf("Input the position of deletion element: ");
    cin>>n;
    arr_deletion(n);
    cout<<"New array is:";
    for (int i = 0; i < maxsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    

 }