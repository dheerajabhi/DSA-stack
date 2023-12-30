#include <iostream>
using namespace std;
int MAX = 10;
int stack[10]={1,2,3,4,5,6,7};
int top=6;
int pop()
{

    if (top == - 1)
    {
        cout << "STACK UNDERFLOW" << endl;
       
    }
    top--;
     return stack[top+1];
   
  
}

int main()
{
    int x[10];
    int i,k,input;
    
    
        cout << "How many number you want to pop: ";
        cin >> input;
     for ( i = 0; i < input; i++)
     {
    x[i]  = pop();
    }

     
    
    for ( k = 0; k < i; k++)
    cout  << x[k] <<" ";

    return 0;
}