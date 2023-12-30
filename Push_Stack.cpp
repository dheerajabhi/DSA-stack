#include <iostream>
using namespace std;
int top = -1;
int MAX = 10;
char stack[10];

void push(char item)
{
    if (top == MAX - 1)
    {
        cout << "STACK OVERFLOW" << endl;
        return ;
    }
    top++;
    stack[top] = item;
  
}

int main()
{
    int x = 1;
     char input;
    
    
        cout << "Enter the value to push in the stack:";
        cin >> input;

     push(input);
    
    
    cout << endl
         << stack[top];
}