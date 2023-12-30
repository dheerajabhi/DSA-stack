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

                x=pow(a , b);
                break;

            case '/':
                x=(a / b);
                break;

            case '*':
                x=(a * b);
                break;

            case '%':
                x=(a % b);
                break;

            case '+':
                x=(a + b);
                break;

            case '-':
                x=(a - b);
                break;
           
           
            }

    push(x);

}
 

int main()
{
    int low = -1,result=0,k;
    

    cout << "Input Postfix Expession:";
    cin>>stack;

      // l=lenght of the expression
    for (int i = 0; k != '\0'; i++)
    {
        k = stack[i];
        low++;
    }
        

    while (low != -1)
    {

        if (check(stack[low]) == 1){

          
               calculate(stack[low--]);
        }
        else
        /* Here concept -'0' for push int value intead of char*/

            push(stack[low--]-'0');
        
    }
        /* storing the value of the last stack as integer in result  */
        result=stackarr[top];
          
    cout << "The result is:" << result << endl;

    cout<<stack<<endl;
    cout<<stackarr;
   
    return 0;


}