#include<iostream>
using namespace std;
int arr[30]={1,2,3,4,5,6,7,8,9,10};
 int maxsize=10;// no ofindex filled
 void arr_insert(int index,int item){

         

    if(index<=0){

        cout<<"Invalid Index:Underflow!!!!"<<endl;
        return;
    }

    if(index>maxsize+1){

         cout<<"Invalid Index:Overflow!!!!"<<endl;
        return;
    }

  //  if(index>0 && index<maxsize-1) //this statement not needed here
    
        
 

        for(int k=maxsize;k>=index-1;k--){
            arr[k+1]=arr[k];
        }
    
       arr[index-1]=item;
       maxsize++;
 }
 int main(){
    int n,item;
    cout<<"Input the position of INSERT element: ";
    cin>>n;
    cout<<"Input insert element value:";
    cin>>item;

    arr_insert(n,item);
    cout<<"New array is:";
    for (int i = 0; i < maxsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    

 }