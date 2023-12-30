#include<iostream>
using namespace std;
int arr[]={1,2,3,4,5,6,7,8,9,10};
 int maxsize=10;

void display(int arr[],int maxsize){

 cout<<" Current Array stored as: ";
    for (int i = 0; i < maxsize; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


 void arr_deletion(int index){

    if(index<0){
        cout<<"Invalid Index:Underflow!!!!"<<endl;
        return;
    }

    if(index>maxsize){
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

    display(arr,maxsize);
 }

void arr_insert(int index,int item,int maxsize){

         

    if(index<=0){

        cout<<"Invalid Index:Underflow!!!!"<<endl;
        return;
    }

    if(index>maxsize+1){

         cout<<"Invalid Index:Overflow!!!!"<<endl;
        return;
    }

 
        
 maxsize++;

        for(int k=maxsize;k>=index-1;k--){
            arr[k+1]=arr[k];
        }
    
       arr[index-1]=item;
       

       display(arr,maxsize);

 }

 void SearchArr(int arr[], int item){

int k;
display(arr,maxsize);
for( k=0;k<=item-1;k++)
{
    if(arr[k]==item){
         cout<<"Element "<<item<<" is  found at Position:"<<k+1<<endl;
       
        break;
    }
}
if(k==item){
    cout<<"Element NOT found.";
}
 

 }


int main(){

    int i,n,item;

    while(1){

        cout<<endl<<"*************************"<<endl;
    cout<<"You are welcome here"<<endl;
    cout<<"*************************"<<endl;
    cout<<"Choose the option to perform:"<<endl<<"[1] Deletion"<<endl<<"[2] Insertion"<<endl<<"[3] Searching"<<endl<<"[4] Display Array"<<endl;
  cout<<"[5] Terminate Program (Exit)/Wrong option"<<endl;
  cout<<"You have to do:";
cin>>i;
if(i==1){
    display(arr, maxsize);
    cout<<"Input the position of deletion element: ";
    cin>>n;
    arr_deletion(n);
}
if(i==2){
    display(arr, maxsize);
 cout<<"Input the position of INSERT element: ";
    cin>>n;
    cout<<"Input insert element value:";
    cin>>item;

    arr_insert(n,item,maxsize);
}
   if(i==3){

    display(arr, maxsize);
    cout<<"Input the element to search:";
    cin>>item;
    
    SearchArr(arr,item);
   }
    
    if(i==4){
        cout<<"displaying........"<<endl;
         display(arr, maxsize);
    }
if(i<1||i>4){

    exit(0);
}
    }
return 0;
 }