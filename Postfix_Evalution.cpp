#include <iostream>
#include<math.h>
using namespace std;
#define MAX 100
char stack[MAX]; // for taking input algebric expession
int top = -1;
char stackarr[MAX]; // pop push operation

int pop()
{
    int temp;
    if (top == -1)
    {
        cout << "STACK UNDERFLOW" << endl;
    }
    temp = stackarr[top];
    top--;
    return temp;
}
void push(char item)
{
    if (top == MAX - 1)
    {
        cout << "STACK OVERFLOW" << endl;
        return;
    }
    top++;
    stackarr[top] = item;
}

int check(char ch)
{

    if ( ch == '^' || ch == '*' || ch == '/' || ch == '%' || ch == '+' || ch == '-')

        return 1;

    return 0;
}

void calculate(char ch )
{ 
          int x;  
          int a=pop();
          int b=pop();

            switch ( ch ){

            case '^':

                x=pow(b , a);
                break;

            case '/':
                x=(b / a);
                break;

            case '*':
                x=(b * a);
                break;

            case '%':
                x=(b % a);
                break;

            case '+':
                x=(b + a);
                break;

            case '-':
                x=(b - a);
                break;
           
           
            }

    push(x);

}
 

int main()
{
    int low = 0,result=0;
    

    cout << "Input Postfix Expession:";
    cin>>stack;

      
    while (stack[low] != '\0')
    {

        if (check(stack[low]) == 1){

          
               calculate(stack[low++]);
        }
        else
        /* Here concept -'0' for push int value intead of char*/

            push(stack[low++]-'0');
        
    }
        /* storing the value of the last stack as integer in result  */
        result=stackarr[top];
          
    cout << "The result is:" << result << endl;

    cout<<stack<<endl;
   
    return 0;


}