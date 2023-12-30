#include <iostream>
#include <string>
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

bool check(char ch)
{

    if (ch == '(' || ch == ')' || ch == '^' || ch == '*' || ch == '/' || ch == '%' || ch == '+' || ch == '-')

        return 1;

    return 0;
}

int precedence(char ch)
{

    if (ch == '(' || ch == ')')
        return 5;
    else

        if (ch == '^')
        return 4;
    else if (ch == '*' || ch == '/' || ch == '%')
        return 3;
    else if (ch == '+' || ch == '-')
        return 2;
    else
        return 1;
}

int main()
{

    int l = -1, k = 1, p = 0, low = 0;
    char prefix[30]; // list to store

    // for input the equation
    cout << "input Algebric expession:";
    cin>>stack;
    // l=lenght of the expression
    for (int i = 0; k != '\0'; i++)
    {
        k = stack[i];
        l++;
    }
    cout << "length of given infix l=" << l << endl;
    // l=Strint last null value in length

   low=l-1;
   p=l;
    prefix[p--] = '\0';

    while (low != -1)
    
    
    {

        if (check(stack[low]) == 1)
        {
            if (top == -1)
                push(stack[low--]);
/*
  here we are not able to perfom '(' AND ')' OPERATIONS I.E WHY COMMENT

*/
       /*     else if (stack[low] == '(')
            
                push(stack[low--]);

            else if (stack[low] == ')')
            {
               
                while (stackarr[top] != '(')
                    postfix[p++] = pop();
                pop();
            }  */
            else if (precedence(stack[low]) <= precedence(stackarr[top] ) && stackarr[top] != '(')
            {

                prefix[p--] = pop();
            }
            else
                push(stack[low--]);
        }
        else
        {if(stack[low] != '\0')
            prefix[p--] = stack[low--];
        }
    }
    while (top != -1)
    {
        prefix[p--] = pop();
    }
   


 cout<<"Infix to prefix: "<<prefix;
   

  

    return 0;
}